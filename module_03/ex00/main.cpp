/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 05:19:06 by narcisse          #+#    #+#             */
/*   Updated: 2024/01/23 17:36:43 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    // Create ClapTrap instances
    ClapTrap claptrap1("CL4P-TP1");
    ClapTrap claptrap2("CL4P-TP2");

    // Test attack, takeDamage, and beRepaired functions
    claptrap1.attack("Enemy1");
    claptrap2.takeDamage(5);
    claptrap1.beRepaired(3);

    claptrap2.attack("Enemy2");
    claptrap1.takeDamage(8);
    claptrap2.beRepaired(2);

    return 0;
}
