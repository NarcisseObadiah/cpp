/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 03:11:38 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/24 03:54:44 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FragTrap.hpp
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap(const std::string& newName);
    ~FragTrap();

    void highFivesGuys();
};

#endif
