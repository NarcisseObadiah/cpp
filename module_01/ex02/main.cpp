/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 05:40:25 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/16 06:09:42 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string myString = "HI THIS IS BRAIN";
	std::string *string_ptr = &myString;
	std::string &string_ref = myString;
	//Print the memory address
	std::cout << "Memory address of the string variable: " << &myString << std::endl;
	std::cout <<"Memory address held by string_ptr: " << string_ptr << std::endl;
	std::cout <<"Memory address held by string_ref: " << &string_ref << std::endl;
	// Print the values
	std::cout <<"Value of the string variable: " << myString << std::endl;
	std::cout << "Value pointed to by string_ptr: " << *string_ptr << std::endl;
	std::cout <<"Value pointed to by string_ref: " << string_ref << std::endl;
	
	return 0;
	
}