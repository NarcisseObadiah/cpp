/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 23:35:30 by narcisse          #+#    #+#             */
/*   Updated: 2024/05/13 23:35:39 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter {
public:
    static void convert(const std::string& literal);

private:
    static void convertToInteger(const std::string& literal);
    static void convertToFloat(const std::string& literal);
    static void convertToDouble(const std::string& literal);
};

#endif
