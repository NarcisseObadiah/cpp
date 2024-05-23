/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 00:09:56 by narcisse          #+#    #+#             */
/*   Updated: 2024/05/14 00:22:45 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Serializer.hpp"
#include "includes/Data.hpp" // Include the header file for your Data structure

uintptr_t Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}
