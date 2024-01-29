/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:10:00 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/29 05:16:43 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Animal.hpp
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;

    // Private constructor to prevent instantiation
    Animal();

public:

    virtual ~Animal() = 0;  // Pure virtual destructor makes the class abstract

    virtual void makeSound() const = 0;  // Pure virtual function for making sound
    virtual const std::string& getType() const = 0;  // Pure virtual function for getting type
};
#endif // ANIMAL_HPP
 