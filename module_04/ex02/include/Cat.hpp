/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:48:34 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/25 14:56:26 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cat.hpp
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();
   virtual ~Cat();

    virtual void makeSound() const;
    virtual const std::string& getType() const;
};

#endif // CAT_HPP
