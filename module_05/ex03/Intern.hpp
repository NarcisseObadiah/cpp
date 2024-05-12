/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:46:04 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/12 11:49:05 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "includes/AForm.hpp"
#include <functional>
#include <map>

class Intern {
public:
    Intern();
    ~Intern();

    AForm* makeForm(const std::string& formName, const std::string& target);

private:
    std::map<std::string, std::function<AForm*(const std::string&)>> formCreators;
};

#endif
