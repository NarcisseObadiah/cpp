/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 01:20:14 by mobadiah          #+#    #+#             */
/*   Updated: 2024/04/09 06:56:04 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat{
public:
	class GradeTooHightException :  public std::exception{
	public: 
		virtual const char * what () const throw() {
			return "Grade too higth";
		}
	};

	class GradeTooLowException :  public std::exception{
	public: 
		virtual const char * what () const throw() {
			return "Grade too low";
		}
	};

	const std::string& getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();

	Bureaucrat(const std::string& name, int grade);
	~Bureaucrat();

	private:
		const std::string _name;
		int _grade;
	
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif

