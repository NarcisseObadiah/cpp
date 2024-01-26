/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:55:34 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/25 21:20:36 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "zombie.hpp"
#include "stdio.h"

int main()
{
    const int hordeSize = 5;
    std::string baseName = "HordeZombie";
    Zombie	*horde = zombieHorde(hordeSize, baseName);
    for (int i = 0; i < hordeSize; ++i)
        horde[i].announce();
    delete[] horde;
    return 0;
}

