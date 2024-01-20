/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 06:24:15 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/18 04:01:14 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon	&weapon;

	public:
		~HumanA(void);
		HumanA(std::string human_name, Weapon &human_weapon);
		void attack(void);
};

#endif