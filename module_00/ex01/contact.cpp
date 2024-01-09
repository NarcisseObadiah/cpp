/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 07:12:31 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/09 13:01:58 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "contact.hpp"


void Contact::set_first_name(const std::string& first_name) {
    _first_name = first_name;
}

void Contact::set_last_name(const std::string& last_name) {
    _last_name = last_name;
}

void Contact::set_nickname(const std::string& nickname) {
    _nickname = nickname;
}

void Contact::set_phone_number(const std::string& phone_number) {
    _phone_number = phone_number;
}

void Contact::set_darkest_secret(const std::string& darkest_secret) {
    _darkest_secret = darkest_secret;
}

void Contact::display_contact() const {
    std::cout << std::setw(15) << "First Name: " << _first_name << std::endl;
    std::cout << std::setw(15) << "Last Name: " << _last_name << std::endl;
    std::cout << std::setw(15) << "Nickname: " << _nickname << std::endl;
    std::cout << std::setw(15) << "Phone Number: " << _phone_number << std::endl;
    std::cout << std::setw(15) << "Darkest Secret: " << _darkest_secret << std::endl;
    std::cout << "------------------------" << std::endl;
}

void Contact::display_contact_list(int index) const {
    std::cout << std::setw(10) << index << " | ";
    std::cout << std::setw(10) << _first_name.substr(0, 10) << " | ";
    std::cout << std::setw(10) << _last_name.substr(0, 10) << " | ";
    std::cout << std::setw(10) << _nickname.substr(0, 10) << " | ";
    std::cout << std::endl;
}
