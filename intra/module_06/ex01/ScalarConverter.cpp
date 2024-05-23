/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 23:36:07 by narcisse          #+#    #+#             */
/*   Updated: 2024/05/14 00:19:31 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ScalarConverter.hpp"
#include <sstream>
#include <limits>
#include <cmath>

void ScalarConverter::convert(const std::string& literal) {
    std::istringstream iss(literal);
    if (literal.size() == 1 && std::isprint(literal[0])) {
        std::cout << "char: '" << literal << "'" << std::endl;
    } else {
        convertToInteger(literal);
        convertToFloat(literal);
        convertToDouble(literal);
    }
}

void ScalarConverter::convertToInteger(const std::string& literal) {
    try {
        int intValue = std::stoi(literal);
        std::cout << "int: " << intValue << std::endl;
    } catch (const std::exception& e) {
        std::cout << "int: impossible" << std::endl;
    }
}

void ScalarConverter::convertToFloat(const std::string& literal) {
    try {
        if (literal == "-inff") {
            std::cout << "float: -inf" << std::endl;
        } else if (literal == "+inff") {
            std::cout << "float: +inf" << std::endl;
        } else {
            float floatValue = std::stof(literal);
            std::cout << "float: " << floatValue << "f" << std::endl;
        }
    } catch (const std::exception& e) {
        std::cout << "float: ";
        if (literal == "nanf")
            std::cout << "nanf";
        else
            std::cout << "impossible";
        std::cout << std::endl;
    }
}

void ScalarConverter::convertToDouble(const std::string& literal) {
    try {
        if (literal == "-inf" || literal == "+inf") {
            std::cout << "double: " << literal << std::endl;
        } else {
            double doubleValue = std::stod(literal);
            std::cout << "double: " << doubleValue << std::endl;
        }
    } catch (const std::exception& e) {
        std::cout << "double: ";
        if (literal == "nan")
            std::cout << "nan";
        else
            std::cout << "impossible";
        std::cout << std::endl;
    }
}
