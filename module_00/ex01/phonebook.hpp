/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:03:17 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/09 07:52:02 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int num_contacts;

public:
    PhoneBook();
    void add_contact();
    void search_contact() const;
    void display_phonebook() const;
};

#endif // PHONEBOOK_HPP




