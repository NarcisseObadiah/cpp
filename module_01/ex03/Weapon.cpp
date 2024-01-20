/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 06:24:28 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/18 03:54:18 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string new_type)
{
	this->type = new_type;
}

Weapon::~Weapon(void)
{
	std::cout << "The weapon of type " << this->type << " is destroyed" << std::endl;
}

void Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

const std::string &Weapon::getType(void)
{
	return (this->type);
}