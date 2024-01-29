/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:06:50 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/29 05:16:10 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
// main.cpp
#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"

#include "include/Cat.hpp"
#include "include/Dog.hpp"

int main() {
    // Uncomment the lines below to test the abstract AAnimal class
    // Animal::animal;  // Error: Cannot instantiate an abstract class

    // Create instances of derived classes
    Cat cat;
    Dog dog;

    // Test makeSound and getType for both cat and dog
    cat.makeSound();
    std::cout << "Cat type: " << cat.getType() << std::endl;

    dog.makeSound();
    std::cout << "Dog type: " << dog.getType() << std::endl;

    return 0;
}

