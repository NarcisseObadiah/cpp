/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 05:38:21 by narcisse          #+#    #+#             */
/*   Updated: 2024/01/23 18:35:33 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ScavTrap.cpp

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& newName)
    : ClapTrap(newName) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap constructor called for " << name << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called for " << name << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gatekeeper mode." << std::endl;
}
