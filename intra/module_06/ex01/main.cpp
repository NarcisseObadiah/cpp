/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 00:15:16 by narcisse          #+#    #+#             */
/*   Updated: 2024/05/14 00:21:13 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Serializer.hpp"
#include "includes/Data.hpp"
#include <iostream>

int main() {
    // Create a sample Data object
    Data data(42, 3.14);

    // Serialize the Data object
    uintptr_t serializedPtr = Serializer::serialize(&data);

    // Deserialize the pointer
    Data* deserializedPtr = Serializer::deserialize(serializedPtr);

    // Check if the deserialized pointer is equal to the original pointer
    if (deserializedPtr == &data) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }

    return 0;
}
