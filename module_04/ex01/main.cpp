/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:06:50 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/24 16:30:26 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
// main.cpp
#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"

int main() {
    const int numAnimals = 6;  // You can change this value based on your needs
    Animal* animalArray[numAnimals];

    // Fill half of the array with Dog objects
    for (int i = 0; i < numAnimals / 2; ++i) {
        animalArray[i] = new Dog();
    }

    // Fill the other half with Cat objects
    for (int i = numAnimals / 2; i < numAnimals; ++i) {
        animalArray[i] = new Cat();
    }

    // Loop over the array and call makeSound for each Animal
    for (int i = 0; i < numAnimals; ++i) {
        animalArray[i]->makeSound();
    }

    // Loop over the array and delete every Animal
    for (int i = 0; i < numAnimals; ++i) {
        delete animalArray[i];
    }

    return 0;
}
