/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 06:26:11 by mobadiah          #+#    #+#             */
/*   Updated: 2024/04/09 06:53:01 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    try {
        // Create a bureaucrat with grade 5
        Bureaucrat b("John", 5);
        std::cout << "Initial bureaucrat: " << b << std::endl;
        
        // Increment grade
        b.incrementGrade();
        std::cout << "After incrementing grade: " << b << std::endl;
        
        // Decrement grade
        b.decrementGrade();
        std::cout << "After decrementing grade: " << b << std::endl;
        
        // Trying to create a bureaucrat with an invalid grade (should throw GradeTooHighException)
        Bureaucrat c("Alice", 0);
    } catch (std::exception const & e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    return 0;
}
