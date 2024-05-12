/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:35:51 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/29 16:01:58 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    // Create instances of ClapTrap and ScavTrap
    ClapTrap claptrap("CL4P-TP");
    ScavTrap scavtrap("SC4V-TP");

    // Test attack, takeDamage, and beRepaired functions for ClapTrap
    claptrap.attack("Enemy1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    // Test ScavTrap-specific functionality
    scavtrap.attack("Enemy2");
    scavtrap.takeDamage(10);
    scavtrap.beRepaired(5);
    scavtrap.guardGate();  // ScavTrap-specific function

    return 0;
}
