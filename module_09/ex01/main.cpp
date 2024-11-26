/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 07:46:13 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/25 08:56:18 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cerr << "Usage: "<< argv[0] << "\"<expression>\""<< std::endl;
		return 1;
	}
	try
	{
		std::string expression = argv[1];
		int result = RPN::evaluate(expression);
		std::cout <<result << std::endl;
	} catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}