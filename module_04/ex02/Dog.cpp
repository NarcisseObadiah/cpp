/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:46:13 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/24 09:39:12 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Dog.cpp
#include "include/Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog constructor called for " << this->type << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called for " << this->type << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Bark! Bark!" << std::endl;
}
