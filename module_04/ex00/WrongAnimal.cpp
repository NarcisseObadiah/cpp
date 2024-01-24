/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:04:00 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/24 09:41:19 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// WrongAnimal.cpp
#include "include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongUnknown") {
    std::cout << "WrongAnimal constructor called for " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called for " << this->type << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "Some wrong generic animal sound" << std::endl;
}

const std::string& WrongAnimal::getType() const {
    return this->type;
}
