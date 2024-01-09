/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:37:48 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/09 13:37:51 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "newZombie.hpp"
#include "randomChump.hpp"

int main() {
    // Using newZombie to create a Zombie on the heap
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();

    // Using randomChump to create a Zombie on the stack and make it announce itself
    randomChump("StackZombie");

    // Cleaning up the heap-allocated Zombie
    delete heapZombie;

    return 0;
}
