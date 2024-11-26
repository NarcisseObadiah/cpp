/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:42:32 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/28 23:26:07 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include <fstream>
#include <iostream>

void processInputFile(const std::string& filename, BitcoinExchange& btcExchange)
{
    std::ifstream infile(filename);
    if (!infile.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }
    std::string line;
    while (std::getline(infile, line)) 
	{
        // Skip the header or empty lines
        if (line.empty() || line == "date | value") {
            continue;
        }
        // Split the line by " | " delimiter
        size_t delimiterPos = line.find(" | ");
        if (delimiterPos == std::string::npos) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::string dateStr = line.substr(0, delimiterPos);
        std::string valueStr = line.substr(delimiterPos + 3);
        try {
            btcExchange.outputExchangeValueOnDate(dateStr, valueStr);
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
}

int main(int argc, char* argv[])
{
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }
    const std::string filename = argv[1];
    try {
        BitcoinExchange btcExchange;
        processInputFile(filename, btcExchange);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
