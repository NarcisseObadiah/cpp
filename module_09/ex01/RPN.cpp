/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 07:45:50 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/25 08:47:55 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int RPN::evaluate(const std::string& expression)
{
	std::stack<int> stack; // using std::stack to manage the operands
	std::istringstream iss(expression);
	std::string token;
	while (iss >> token)
	{
		if (std::isdigit(token[0]))
			stack.push(token[0] - '0');
		else if (token.length() == 1 && std::string("+-/*").find(token) != std::string::npos)
		{
			if (stack.size() < 2)
				throw std::runtime_error("Error: insufficient values in the expression");
			int operand2 = stack.top(); stack.pop();
			int operand1 = stack.top(); stack.pop();
			int result = performOperation(token[0], operand1, operand2);
			stack.push(result);
		}
		else
			throw std::runtime_error("Error invalid token int the expression");	
	}
	if (stack.size() != 1)
		throw std::runtime_error("Error: the user input has too many values");
	return stack.top();
}

int RPN::performOperation(char operation, int operand1, int operand2)
{
	switch (operation)
	{
		case '+': return operand1 + operand2;
		case '-': return operand1 - operand2;
		case '*': return operand1 * operand2;
		case '/':
			if (operand2 == 0)
				throw std::runtime_error("Error: division by zero");
			return operand1 / operand2;
		default:
			throw std::runtime_error("Error: unknown operation");
	}
}