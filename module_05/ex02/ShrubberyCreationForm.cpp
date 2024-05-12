/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 10:28:46 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/11 11:20:09 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ShrubberyCreationForm.hpp"
#include "includes/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (!isSigned() || executor.getGrade() > getExecuteGrade())
        throw GradeTooLowException();
    
    std::ofstream file((_target + "_shrubbery").c_str());
    if (file.is_open()) {
        file << "ASCII tree here" << std::endl;
        file.close();
    } else {
        throw std::runtime_error("Unable to open file for shrubbery creation");
    }
}

