/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:01:53 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/26 17:20:41 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() 
{
    // Test default constructor
    Array<int> arr1;
    std::cout << "Size of arr1: " << arr1.size() << std::endl;

    // Test constructor with size parameter
    Array<double> arr2(5);
    std::cout << "Size of arr2: " << arr2.size() << std::endl;

    // Test subscript operator and size() function
    for (unsigned int i = 0; i < arr2.size(); ++i)
        arr2[i] = i * 1.5;
    std::cout << "Elements of arr2: ";
    for (unsigned int i = 0; i < arr2.size(); ++i)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;

    // Test copy constructor and assignment operator
    Array<double> arr3 = arr2;
    std::cout << "Size of arr3: " << arr3.size() << std::endl;

    // Modify arr3 to ensure it's independent from arr2
    arr3[0] = 100.0;
    std::cout << "Modified elements of arr3: ";
    for (unsigned int i = 0; i < arr3.size(); ++i)
        std::cout << arr3[i] << " ";
    std::cout << std::endl;

    // Ensure arr2 remains unchanged
    std::cout << "Elements of arr2 after modification of arr3: ";
    for (unsigned int i = 0; i < arr2.size(); ++i)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;

    return 0;
}
