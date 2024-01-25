/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:04:34 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/24 09:21:48 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// WrongAnimal.hpp
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal();
    ~WrongAnimal();

    void makeSound() const;
    const std::string& getType() const;
};

#endif // WRONGANIMAL_HPP
