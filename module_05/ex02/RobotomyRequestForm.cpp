/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 10:36:34 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/11 11:12:58 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/RobotomyRequestForm.hpp"
#include "includes/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (!isSigned() || executor.getGrade() > getExecuteGrade())
        throw GradeTooLowException();
    
    std::cout << "* Makes some drilling noises *" << std::endl;
    std::cout << "* Robotomy process initiated on " << _target << " *" << std::endl;

    // Randomly determine if the robotomy was successful or not
    bool success = rand() % 2 == 0;

    if (success)
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy on " << _target << " has failed!" << std::endl;
}
