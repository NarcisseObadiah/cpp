/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:06:35 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/24 09:22:35 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// WrongCat.hpp
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    ~WrongCat();

    void makeSound() const;
};

#endif // WRONGCAT_HPP
