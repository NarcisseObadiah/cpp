/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 05:14:18 by narcisse          #+#    #+#             */
/*   Updated: 2024/01/24 04:14:38 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ClapTrap.cpp
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& newName)
    : name(newName), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap constructor called for " << name << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called for " << name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (energyPoints >= 1) {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
                  << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } else {
        std::cout << "ClapTrap " << name << " is out of energy and can't attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints > 0) {
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
        hitPoints = (amount >= hitPoints) ? 0 : hitPoints - amount;
    } else {
        std::cout << "ClapTrap " << name << " is already out of hit points!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints >= 1) {
        std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points!" << std::endl;
        hitPoints += amount;
        energyPoints--;
    } else {
        std::cout << "ClapTrap " << name << " is out of energy and can't be repaired!" << std::endl;
    }
}
