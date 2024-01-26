/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:21:43 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/25 20:11:08 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


PhoneBook::PhoneBook() : num_contacts(0) {}

void PhoneBook::add_contact() {
    if (num_contacts < 8) {
        Contact new_contact;
        std::string input;

        std::cout << "Enter First Name: ";
        std::cin >> input;
        new_contact.set_first_name(input);

        std::cout << "Enter Last Name: ";
        std::cin >> input;
        new_contact.set_last_name(input);

        std::cout << "Enter Nickname: ";
        std::cin >> input;
        new_contact.set_nickname(input);

        std::cout << "Enter Phone Number: ";
        std::cin >> input;
        new_contact.set_phone_number(input);

        std::cout << "Enter Darkest Secret: ";
        std::cin.ignore(); // Clear the newline character from the buffer
        std::getline(std::cin, input);
        new_contact.set_darkest_secret(input);

        if (num_contacts < 8) {
            contacts[num_contacts] = new_contact;
            num_contacts++;
        } else {
            // Replace the oldest contact if the phonebook is full
            for (int i = 0; i < 7; i++) {
                contacts[i] = contacts[i + 1];
            }
            contacts[7] = new_contact;
        }

        std::cout << "Contact added successfully!\n";
    } else {
        std::cout << "Phonebook is full. Replace the oldest contact.\n";
    }
}

void PhoneBook::search_contact() const {
    if (num_contacts == 0) {
        std::cout << "Phonebook is empty. No contacts to display.\n";
        return;
    }
    // Display contacts as a list
    std::cout << std::setw(10) << "Index" << " | ";
    std::cout << std::setw(10) << "First Name" << " | ";
    std::cout << std::setw(10) << "Last Name" << " | ";
    std::cout << std::setw(10) << "Nickname" << " | ";
    std::cout << std::endl;

    for (int i = 0; i < num_contacts; i++) {
        contacts[i].display_contact_list(i);
    }
    int index;
    std::string input;
    while (true) {
        std::cout << "Enter the index of the contact to display: ";
        std::cin >> input;

        // Check if the input is a number
        if (std::all_of(input.begin(), input.end(), ::isdigit)) {
            index = std::stoi(input);
            break;  // Exit the loop if a valid integer is entered
        } else {
            std::cout << "Error: Please enter a valid number for the index." << std::endl;
            std::cin.clear();  // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
        }
    }
    // Display the contact information if the index is valid
    if (index >= 0 && index < num_contacts) {
        contacts[index].display_contact();
    } else {
        std::cout << "Invalid index. No contact to display.\n";
    }
}
void PhoneBook::display_phonebook() const {
    for (int i = 0; i < num_contacts; i++) {
        std::cout << "Contact " << i + 1 << ":\n";
        contacts[i].display_contact();
    }
}

