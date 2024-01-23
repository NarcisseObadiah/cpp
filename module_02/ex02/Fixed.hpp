/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 02:15:12 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/23 00:19:10 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Fixed.h
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed();
    Fixed(const int intValue);
    Fixed(const float floatValue);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    int getRawBits() const;
    void setRawBits(int const raw);

    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    Fixed& operator++();       
    Fixed operator++(int);     
    Fixed& operator--();       
    Fixed operator--(int);

    static const Fixed& min(const Fixed& a, const Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

    float toFloat() const;
    int toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif // FIXED_H



