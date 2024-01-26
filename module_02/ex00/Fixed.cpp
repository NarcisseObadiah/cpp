/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 02:15:17 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/26 04:08:29 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& other) : value(other.value) {
    std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        value = other.value;
        std::cout << "Copy assignment operator called" << std::endl;
    }
    return *this;
}
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}
void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}
