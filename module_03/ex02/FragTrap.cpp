/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 03:10:37 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/24 03:15:31 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FragTrap.cpp
#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& newName)
    : ClapTrap(newName) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap constructor called for " << name << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << name << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}
 