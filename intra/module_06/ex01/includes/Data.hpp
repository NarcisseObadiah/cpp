/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 00:13:39 by narcisse          #+#    #+#             */
/*   Updated: 2024/05/14 00:13:52 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

class Data {
public:
    int id;
    double value;

    // Constructor
    Data(int id, double value) : id(id), value(value) {}
};

#endif // DATA_HPP
