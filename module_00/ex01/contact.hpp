/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 06:39:43 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/09 07:52:05 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>


class Contact {
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;

public:
    void set_first_name(const std::string& first_name);
    void set_last_name(const std::string& last_name);
    void set_nickname(const std::string& nickname);
    void set_phone_number(const std::string& phone_number);
    void set_darkest_secret(const std::string& darkest_secret);
    void display_contact() const;
    void display_contact_list(int index) const;
};

#endif // CONTACT_HPP


