/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:30:57 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/29 04:19:08 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Animal.cpp
#include "include/Animal.hpp"

Animal::Animal() : type("Unknown") {
    std::cout << "Animal constructor called for " << this->type << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called for " << this->type << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Some generic animal sound" << std::endl;
}

const std::string& Animal::getType() const {
    return this->type;
}
