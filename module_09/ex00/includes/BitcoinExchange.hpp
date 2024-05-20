/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:14:57 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/20 20:33:00 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <ctime>
#include <stdexcept>
#include <limits>
#include <iomanip>
#include <sys/stat.h>

// Constants for readability
#define DATE 0
#define VALUE 1
#define VERBOSE 1
#define YELLOW "\033[33m"
#define RESET "\033[0m"

// BitcoinExchange class definition
class BitcoinExchange {
public:
    // Constructors and destructor
    BitcoinExchange();
    BitcoinExchange(BitcoinExchange& src);
    ~BitcoinExchange();

    // Assignment operator
    BitcoinExchange& operator=(BitcoinExchange& src);

    // Public methods for output and calculation
    void outputExchangeValueOnDate(std::string& dateStr, std::string& valueStr);
    double getExchangeValueOnDate(std::string& dateStr, std::string& valueStr);

private:
    // Map to store exchange rates with date as the key
    std::map<time_t, double> _exchangeRate;

    // Private methods for internal operations
    void _fillExchangeRateTable();
    void _fillExchangeRateEntry(std::string line);
    void _addExchangeRateEntry(time_t date, double value);
    void _printClosestExchangeRate(time_t date);

    double _getExchangeRateOnDate(time_t date);
    time_t _getClosestDateInTable(time_t date);
    time_t _getEpochFromDateString(std::string& dateStr) const;
    int _getYearFromString(std::string& dateStr) const;
    int _getMonthFromString(std::string& dateStr) const;
    int _getDayFromString(std::string& dateStr) const;
    std::string const _getDateFromEpoch(time_t epochDate) const;
    double _getValueFromString(std::string& valueStr) const;

    void _checkInputStrings(std::string& dateStr, std::string& valueStr) const;
    void _checkValueString(std::string& string) const;
    void _checkDateString(std::string& string) const;
    void _checkDayString(std::string& string) const;
    bool isStringEmpty(const std::string& string) const;
    std::string* splitString(const std::string& s, const std::string& delimiter) const;
};

#endif // BITCOINEXCHANGE_HPP
