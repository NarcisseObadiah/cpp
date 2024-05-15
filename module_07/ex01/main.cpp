/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 07:05:51 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/15 07:26:49 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

// Modified print function template to accept const reference
template<typename T>
void print(const T& element) {
    std::cout << element << " ";
}

int main() {
    // Test with an array of integers
    int intArray[] = {1, 2, 3, 4, 5};
    std::cout << "Printing integer array elements: ";
    iter(intArray, 5, print<int>);
    std::cout << std::endl;

    // Test with an array of doubles
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "Printing double array elements: ";
    iter(doubleArray, 5, print<double>);
    std::cout << std::endl;

    // Test with an array of characters
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    std::cout << "Printing char array elements: ";
    iter(charArray, 5, print<char>);
    std::cout << std::endl;

    return 0;
}
