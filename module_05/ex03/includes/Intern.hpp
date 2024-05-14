/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:46:04 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/13 22:12:53 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"   
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
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
