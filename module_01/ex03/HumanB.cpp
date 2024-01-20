/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 06:24:19 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/18 03:58:59 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::~HumanB(void) 
{

}

HumanB::HumanB(std::string human_name)
{
	this->name = human_name;
	this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &human_weapon)
{
	this->weapon = &human_weapon;
}

void HumanB::attack(void) {
	if (this->weapon)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " doesn't have a weapon!" << std::endl;
}
