/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 04:25:44 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/11 09:27:34 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Form.hpp"
#include "includes/Bureaucrat.hpp"

Form::Form(const std::string &name, int signGrade, int executeGrade)
	: _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade) {
		if (signGrade < 1 || executeGrade < 1)
			throw GradeTooHighException();
		else if (signGrade > 150 || executeGrade > 150)
			throw GradeTooLowException();
	}

Form::~Form() {}

const std::string& Form::getName() const {
	return _name;
}

bool Form::isSigned() const {
	return _isSigned;
}

int Form::getSignGrade() const {
	return _signGrade;
}

int Form::getExecuteGrade() const {
	return _executeGrade;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= _signGrade)
		_isSigned = true;
	else
		throw GradeTooLowException();
}


const char* Form::GradeTooHighException::what() const throw() {
	return "Grade too hight!";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade too low!";
}

std::ostream& operator<<(std::ostream &os, const Form &form) {
	os << "Form: " << form.getName() << ", Sign grade: " << form.getSignGrade()
		<< ", Execute Grade: " << form.getExecuteGrade() << ", Signed: " << (form.isSigned() ? "Yes" : "No");
	return os;
}