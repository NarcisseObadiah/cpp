/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:58:49 by mobadiah          #+#    #+#             */
/*   Updated: 2023/12/17 01:57:51 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(int argc, char **argv)
{

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOIR *" << std::endl;
		return (0);
	}
	
	int i  = 1;
	
	while (i < argc)
	{
		int j = 0;
		while (argv[i][j] != '\0')
		{
			std::cout << (char)(std::toupper(argv[i][j]));
			j++;
		}
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
	
}