/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:45:48 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/24 09:20:52 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Dog.hpp
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    ~Dog();

    void makeSound() const;
};

#endif // DOG_HPP
