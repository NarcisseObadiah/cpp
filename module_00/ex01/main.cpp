/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 07:52:43 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/09 07:56:23 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main() {
    PhoneBook phonebook;
    std::string command;

    while (true) {
        // Display menu
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "ADD") {
            phonebook.add_contact();
        } else if (command == "SEARCH") {
            phonebook.search_contact();
        } else if (command == "EXIT") {
            std::cout << "Goodbye! Contacts are lost forever.\n";
            break;
        } else {
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT.\n";
        }
    }

    return 0;
}