/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:45:48 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/25 14:56:39 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Dog.hpp
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
   virtual ~Dog();

   virtual void makeSound() const;
    virtual const std::string& getType() const;
};

#endif // DOG_HPP
