/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:41:57 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/20 21:02:04 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include <cstring>

// Constructor: fills the exchange rate table from the CSV file
BitcoinExchange::BitcoinExchange() {
    try {
        _fillExchangeRateTable();
    } catch (std::exception& e) {
        std::string error = e.what();
        throw std::runtime_error("Invalid exchange rate data: " + error);
    }
}

// Copy constructor: copies the exchange rate table from another instance
BitcoinExchange::BitcoinExchange(BitcoinExchange& src) {
    this->_exchangeRate = src._exchangeRate;
}

// Destructor: default destructor
BitcoinExchange::~BitcoinExchange() {}

// Assignment operator: assigns the exchange rate table from another instance
BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange& src) {
    this->_exchangeRate = src._exchangeRate;
    return *this;
}

// Fills the exchange rate table from the CSV file
void BitcoinExchange::_fillExchangeRateTable() {
    std::string path = "data/data.csv";
    struct stat filecheck;
    if (stat(path.c_str(), &filecheck) != 0) {
        throw std::runtime_error(path + ": invalid file");
    }
    if ((filecheck.st_mode & S_IFREG) == 0) {
        throw std::runtime_error(path + ": is a directory");
    }
    if ((filecheck.st_mode & S_IXUSR) != 0) {
        throw std::runtime_error(path + ": is an executable");
    }
    std::fstream fs;
    fs.open(path.c_str(), std::fstream::in);
    if (fs.fail()) {
        throw std::runtime_error("Could not open data file");
    }
    char line[100];
    fs.getline(line, 100);
    while (!fs.eof()) {
        fs.getline(line, 100);
        if (!fs.eof() && line[0] != '\0') {
            _fillExchangeRateEntry(std::string(line));
        }
    }
}

// Fills a single entry in the exchange rate table from a line of the CSV file
void BitcoinExchange::_fillExchangeRateEntry(std::string line) {
    std::string* split = splitString(line, ",");
    _checkDateString(split[DATE]);
    _checkValueString(split[VALUE]);

    time_t date = _getEpochFromDateString(split[DATE]);
    double value = _getValueFromString(split[VALUE]);

    _addExchangeRateEntry(date, value);
    delete[] (split);
}

// Adds an exchange rate entry to the map
void BitcoinExchange::_addExchangeRateEntry(time_t date, double value) {
    std::map<time_t, double>::iterator it = _exchangeRate.find(date);
    if (it != _exchangeRate.end()) {
        it->second = value;
    } else {
        _exchangeRate.insert(std::pair<time_t, double>(date, value));
    }
}

// Outputs the exchange value on a given date
void BitcoinExchange::outputExchangeValueOnDate(std::string& dateStr, std::string& valueStr) {
    _checkInputStrings(dateStr, valueStr);

    time_t date = _getEpochFromDateString(dateStr);
    double value = _getValueFromString(valueStr);
    if (value < 0 || value > 1000) {
        throw std::out_of_range("invalid value: must be between 0 and 1000");
    }
    double exchangeRate = _getExchangeRateOnDate(date);
    double exchangeValue = getExchangeValueOnDate(dateStr, valueStr);

    if (VERBOSE) {
        _printClosestExchangeRate(date);
    }
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << "[" << _getDateFromEpoch(date) << "] " << value << " * ";
    std::cout << exchangeRate << " = " << exchangeValue << std::endl;
}

// Prints the closest exchange rate entry for a given date
void BitcoinExchange::_printClosestExchangeRate(time_t date) {
    time_t closestEpoch = _getClosestDateInTable(date);
    std::string closestDate = _getDateFromEpoch(closestEpoch);

    std::cout << YELLOW << "Closest exchange data: " << closestDate << " -> ";
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << _exchangeRate[closestEpoch] << RESET << std::endl;
}

// Gets the exchange value for a given date and value
double BitcoinExchange::getExchangeValueOnDate(std::string& dateStr, std::string& valueStr) {
    _checkInputStrings(dateStr, valueStr);
    double rate = _getExchangeRateOnDate(_getEpochFromDateString(dateStr));
    double value = _getValueFromString(valueStr);
    return (value * rate);
}

// Gets the exchange rate for the closest date to the specified date
double BitcoinExchange::_getExchangeRateOnDate(time_t date) {
    time_t closestDate = _getClosestDateInTable(date);
    return (_exchangeRate[closestDate]);
}

// Finds the closest date in the exchange rate table
time_t BitcoinExchange::_getClosestDateInTable(time_t date) {
    std::map<time_t, double>::iterator it = _exchangeRate.find(date);
    if (date < _exchangeRate.begin()->first) {
        return (_exchangeRate.begin()->first);
    }
    for (int i = 0; it == _exchangeRate.end(); i++) {
        time_t newDate = date - i * 24 * 60 * 60;
        it = _exchangeRate.find(newDate);
    }
    return (it->first);
}

// Converts a date string to epoch time
time_t BitcoinExchange::_getEpochFromDateString(std::string& dateStr) const {
    struct tm tm;
    bzero(&tm, sizeof(tm));
    tm.tm_year = _getYearFromString(dateStr) - 1900;
    tm.tm_mon = _getMonthFromString(dateStr) - 1;
    tm.tm_mday = _getDayFromString(dateStr);

    struct tm copy;
    bzero(&copy, sizeof(copy));
    copy.tm_year = tm.tm_year;
    copy.tm_mon = tm.tm_mon;
    copy.tm_mday = tm.tm_mday;

    time_t date = mktime(&tm);
    if (date == -1 || copy.tm_year != tm.tm_year || copy.tm_mon != tm.tm_mon
        || copy.tm_mday != tm.tm_mday) {
        throw (std::out_of_range(dateStr + ": invalid date"));
    }
    return (date);
}

// Extracts the year from a date string
int BitcoinExchange::_getYearFromString(std::string& dateStr) const {
    size_t lenYear = dateStr.find("-", 0);
    std::string yearStr = dateStr.substr(0, lenYear);
    int year = std::atoi(yearStr.c_str());
    if (yearStr.empty() || year < 0 || year > 2050) {
        throw std::out_of_range(dateStr + ": invalid date");
    }
    return (year);
}

// Extracts the month from a date string
int BitcoinExchange::_getMonthFromString(std::string& dateStr) const {
    size_t lenYear = dateStr.find("-", 0) + 1;
    size_t lenMon = dateStr.find("-", lenYear) - lenYear;
    std::string monthStr = dateStr.substr(lenYear, lenMon);
    int month = std::atoi(monthStr.c_str());
    if (monthStr.empty() || month < 1 || month > 12) {
        throw std::out_of_range(dateStr + ": invalid date");
    }
    return (month);
}

// Extracts the day from a date string
int BitcoinExchange::_getDayFromString(std::string& dateStr) const {
    size_t lenYear = dateStr.find("-", 0) + 1;
    size_t lenMon = dateStr.find("-", lenYear) + 1;
    size_t lenDay = dateStr.length() - lenMon;
    std::string dayStr = dateStr.substr(lenMon, lenDay);
    try {
        _checkDayString(dayStr);
    } catch (std::exception& e) {
        throw std::out_of_range(dateStr + ": invalid date");
    }
    int day = std::atoi(dayStr.c_str());
    if (dayStr.empty() || day < 1 || day > 31) {
        throw std::out_of_range(dateStr + ": invalid date");
    }
    return (day);
}

// Converts epoch time to a date string
std::string const BitcoinExchange::_getDateFromEpoch(time_t epochDate) const {
    struct tm* date = localtime(&epochDate);
    std::stringstream ss;
    ss << std::setfill('0') << std::setw(4) << date->tm_year + 1900;
    ss << "-" << std::setfill('0') << std::setw(2) << date->tm_mon + 1;
    ss << "-" << std::setfill('0') << std::setw(2) << date->tm_mday;
    return (ss.str());
}

// Converts a value string to a double
double BitcoinExchange::_getValueFromString(std::string& valueStr) const {
    double value = std::strtod(valueStr.c_str(), NULL);
    if (value < 0) {
        throw (std::out_of_range(valueStr + ": not a positive value"));
    } else if (value > std::numeric_limits<int>::max()) {
        throw (std::out_of_range(valueStr + ": value too large"));
    }
    return (value);
}

// Checks the validity of input date and value strings
void BitcoinExchange::_checkInputStrings(std::string& dateStr, std::string& valueStr) const {
    _checkDateString(dateStr);
    _checkValueString(valueStr);
}

// Checks the validity of a value string
void BitcoinExchange::_checkValueString(std::string& string) const {
    if (isStringEmpty(string) == true) {
        throw (std::runtime_error("no value provided"));
    }
    std::string required = "0123456789";
    size_t pos = string.find_first_of(required, 0);
    if (pos == std::string::npos) {
        throw (std::runtime_error(string + ": invalid value"));
    }
    std::string::iterator it = string.begin();
    for (; it != string.end(); it++) {
        if (std::isalpha(*it) || !std::isprint(*it)) {
            throw (std::runtime_error(string + ": invalid value"));
        }
    }
}

// Checks the validity of a date string
void BitcoinExchange::_checkDateString(std::string& string) const {
    if (isStringEmpty(string)) {
        throw (std::runtime_error("no date provided"));
    }
    std::string required = "0123456789-";
    size_t pos = string.find_first_of(required, 0);
    if (pos == std::string::npos) {
        throw (std::runtime_error(string + ": invalid date"));
    }
    std::string::iterator it = string.begin();
    for (; it != string.end(); it++) {
        if (std::isalpha(*it) || !std::isprint(*it)) {
            throw (std::runtime_error(string + ": invalid date"));
        }
    }
}

// Checks the validity of a day string
void BitcoinExchange::_checkDayString(std::string& string) const {
    std::string::iterator it = string.begin();
    for (; it != string.end(); it++) {
        if (std::isdigit(*it) == false && isblank(*it) == false) {
            throw std::out_of_range("invalid date");
        }
    }
}

// Checks if a string is empty
bool BitcoinExchange::isStringEmpty(const std::string& string) const {
    return string.empty();
}

// Splits a string by a delimiter
std::string* BitcoinExchange::splitString(const std::string& s, const std::string& delimiter) const {
    size_t pos = 0;
    size_t delimiterPos = s.find(delimiter);
    std::string* result = new std::string[2];
    result[0] = s.substr(0, delimiterPos);
    result[1] = s.substr(delimiterPos + delimiter.length());
    return result;
}
