/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:48:12 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/13 22:27:11 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Intern.hpp"

Intern::Intern() {
    formCreators["shrubbery creation"] = [](const std::string& target) { return new ShrubberyCreationForm(target); };
    formCreators["robotomy request"] = [](const std::string& target) { return new RobotomyRequestForm(target); };
    formCreators["presidential pardon"] = [](const std::string& target) { return new PresidentialPardonForm(target); };
}

Intern::~Intern() {}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) {
    auto it = formCreators.find(formName);
    if (it != formCreators.end()) {
        std::cout << "Intern creates " << formName << std::endl;
        return it->second(target);
    } else {
        std::cerr << "Error: Unknown form name" << std::endl;
        return nullptr;
    }
}
