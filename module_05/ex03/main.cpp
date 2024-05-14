/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 22:04:22 by narcisse          #+#    #+#             */
/*   Updated: 2024/05/13 23:17:24 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Intern.hpp"

int main() {
    Intern someRandomIntern;
    Bureaucrat bureaucrat("Test Bureaucrat", 8); // Dummy bureaucrat for testing

    AForm* shrubberyForm = someRandomIntern.makeForm("shrubbery creation", "Garden");
    AForm* robotomyForm = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm* pardonForm = someRandomIntern.makeForm("presidential pardon", "John Doe");
    AForm* unknownForm = someRandomIntern.makeForm("unknown form", "Unknown");

    // Test if forms were created successfully and execute them if they exist
    if (shrubberyForm) {
        try {
            shrubberyForm->beSigned(bureaucrat);
            shrubberyForm->execute(bureaucrat);
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    if (robotomyForm) {
        try {
            robotomyForm->beSigned(bureaucrat);
            robotomyForm->execute(bureaucrat);
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    if (pardonForm) {
        try {
            pardonForm->beSigned(bureaucrat);
            pardonForm->execute(bureaucrat);
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    if (unknownForm)
        delete unknownForm;

    // Cleanup
    if (shrubberyForm)
        delete shrubberyForm;
    if (robotomyForm)
        delete robotomyForm;
    if (pardonForm)
        delete pardonForm;

    return 0;
}
