/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:10:00 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/24 09:36:46 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Animal.hpp
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;

public:
    Animal();
    virtual ~Animal();

    virtual void makeSound() const;
    const std::string& getType() const;
};

#endif // ANIMAL_HPP
