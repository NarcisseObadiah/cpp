/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 06:24:32 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/18 03:47:32 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		void setType(const std::string type);
		const std::string &getType(void);
};

#endif
