/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:48:24 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/24 09:38:53 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cat.cpp
// Cat.cpp
#include "include/Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Cat constructor called for " << this->type << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called for " << this->type << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}
