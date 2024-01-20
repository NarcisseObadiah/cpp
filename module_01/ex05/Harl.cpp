/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:23:53 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/19 18:45:28 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
    // Constructor implementation (if needed)
}

Harl::~Harl(void) {
    // Destructor implementation (if needed)
}

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    std::string list_of_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; // list of the levels
    void (Harl::*ptr_level[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    size_t i = 0;
    while (i < 4) {
        if (list_of_level[i] == level) {
            (this->*ptr_level[i])();
            return;
        }
        i++;
    }
    std::cout << "This level is unknown" << std::endl;
}
