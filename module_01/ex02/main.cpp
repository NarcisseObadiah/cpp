/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 05:40:25 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/25 21:46:14 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string myString = "HI THIS IS BRAIN";
	std::string *stringPTR = &myString;
	std::string &stringREF = myString;
	//Print the memory address
	std::cout << "Memory address of the string variable: " << &myString << std::endl;
	std::cout <<"Memory address held by  stringPTR: " << stringPTR << std::endl;
	std::cout <<"Memory address held by stringREF: " << &stringREF<< std::endl;
	// Print the values
	std::cout <<"Value of the string variable: " << myString << std::endl;
	std::cout << "Value pointed to by  stringPTR: " << *stringPTR << std::endl;
	std::cout <<"Value pointed to by stringREF: " << stringREF << std::endl;
	
	return 0;
	
}