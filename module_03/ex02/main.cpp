/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 03:12:14 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/24 03:12:17 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    // Create instances of ClapTrap, ScavTrap, and FragTrap
    ClapTrap claptrap("CL4P-TP");
    ScavTrap scavtrap("SC4V-TP");
    FragTrap fragtrap("FR4G-TP");

    // Test ClapTrap-specific functionality
    claptrap.attack("Enemy1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    // Test ScavTrap-specific functionality
    scavtrap.attack("Enemy2");
    scavtrap.takeDamage(10);
    scavtrap.beRepaired(5);
    scavtrap.guardGate();

    // Test FragTrap-specific functionality
    fragtrap.attack("Enemy3");
    fragtrap.takeDamage(15);
    fragtrap.beRepaired(8);
    fragtrap.highFivesGuys();

    return 0;
}
