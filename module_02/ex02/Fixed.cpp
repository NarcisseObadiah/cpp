/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 02:15:17 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/23 00:18:08 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int intValue) : value(intValue << fractionalBits) {}

Fixed::Fixed(const float floatValue) : value(static_cast<int>(roundf(floatValue * (1 << fractionalBits)))) {}

Fixed::Fixed(const Fixed& other) : value(other.value) {}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

Fixed::~Fixed() {}

int Fixed::getRawBits() const {
    return value;
}

void Fixed::setRawBits(int const raw) {
    value = raw;
}

bool Fixed::operator>(const Fixed& other) const {
    return value > other.value;
}

bool Fixed::operator<(const Fixed& other) const {
    return value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const {
    return value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const {
    return value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const {
    return value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const {
    return value != other.value;
}

Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result.setRawBits(value + other.value);
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.setRawBits(value - other.value);
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result.setRawBits((static_cast<int64_t>(value) * other.value) >> fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    Fixed result;
    result.setRawBits((static_cast<int64_t>(value) << fractionalBits) / other.value);
    return result;
}

Fixed& Fixed::operator++() {
    ++value;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    ++value;
    return temp;
}

Fixed& Fixed::operator--() {
    --value;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    --value;
    return temp;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}

float Fixed::toFloat() const {
    return static_cast<float>(value) / (1 << fractionalBits);
}

int Fixed::toInt() const {
    return value >> fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
