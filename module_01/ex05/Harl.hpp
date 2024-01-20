/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:23:45 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/19 18:25:04 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>

class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level);
};

#endif // HARL_HPP
