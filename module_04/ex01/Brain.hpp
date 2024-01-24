/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:25:18 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/24 16:32:24 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Brain.hpp
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include "include/Animal.hpp"
class Brain {
private:
    std::string ideas[100];

public:
    Brain();
    ~Brain();
};

#endif // BRAIN_HPP
