/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:55:34 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/09 19:03:11 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    const int hordeSize = 5;
    std::string baseName = "HordeZombie";

    // Create the zombie horde using an array
    Zombie* horde =  new Zombie(hordeSize, baseName);

    // Announce each zombie in the horde
    for (int i = 0; i < hordeSize; ++i) {
        horde[i].announce();
    }

    // Deallocate the zombie horde
    delete[] horde;

    return 0;
}

