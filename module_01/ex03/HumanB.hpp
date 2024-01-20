/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 06:24:23 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/18 03:57:47 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string human_name);
		~HumanB();
		void setWeapon(Weapon	&human_weapon);
		void attack(void);
};

#endif
