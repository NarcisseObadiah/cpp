/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:55:21 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/16 05:23:15 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"


Zombie::Zombie() : name("Unnamed Zombie") {}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " has been destroyed." << std::endl;
}
void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
