/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:48:34 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/24 09:21:14 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cat.hpp
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();
    ~Cat();

    void makeSound() const;
};

#endif // CAT_HPP
