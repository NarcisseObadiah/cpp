/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:55:34 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/16 05:21:05 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "zombie.hpp"
#include "stdio.h"

int main()
{
    const int hordeSize = 5;
    std::string baseName = "HordeZombie";
    // Create the zombie horde using an array
    Zombie	*horde = zombieHorde(hordeSize, baseName);
    // Announce each zombie in the horde
    for (int i = 0; i < hordeSize; ++i)
        horde[i].announce();
    // Deallocate the zombie horde
    delete[] horde;
    return 0;
}

