/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:06:31 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/24 09:41:32 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// WrongCat.cpp
#include "include/WrongCat.hpp"

WrongCat::WrongCat() {
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called for " << this->type << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called for " << this->type << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Wrong Meow! Wrong Meow!" << std::endl;
}

