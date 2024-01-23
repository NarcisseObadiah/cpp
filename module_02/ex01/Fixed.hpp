/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 02:15:12 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/22 21:01:51 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Fixed.hpp

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed();
    Fixed(const int intValue);
    Fixed(const float floatValue);  
    float toFloat() const;
    int toInt() const;
    
    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};

#endif

