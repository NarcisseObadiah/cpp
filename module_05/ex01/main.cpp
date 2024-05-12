/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 06:26:11 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/12 11:42:53 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Bureaucrat.hpp"


int main() {
    try {
        Bureaucrat john("John", 5);
        std::cout << john << std::endl;

        Form form("Tax Form", 10, 15);
        std::cout << form << std::endl;

        john.signForm(form);
        std::cout << john << std::endl;
        std::cout << form << std::endl;

        // Try signing the form with a bureaucrat with lower grade
        Bureaucrat lowGrade("Low", 20);
        lowGrade.signForm(form);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
