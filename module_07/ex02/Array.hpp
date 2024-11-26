/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:00:38 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/26 17:20:53 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept> // For std::out_of_range

template<typename T>
class Array {
private:
    T* data;
    unsigned int length;

public:
    // Constructor with no parameter
    Array() : data(nullptr), length(0) {}
    // Constructor with size parameter
    Array(unsigned int n) : length(n)
	{
        data = new T[n]; // Allocate memory for the array
        // Initialize elements by default constructor
        for (unsigned int i = 0; i < n; ++i) {
            data[i] = T();
        }
    }
    // Copy constructor
    Array(const Array& other) : length(other.length) {
        data = new T[length]; // Allocate memory for the array
        // Copy elements from the other array
        for (unsigned int i = 0; i < length; ++i)
            data[i] = other.data[i];
    }
    // Assignment operator
    Array& operator=(const Array& other)
	{
        if (this != &other) // Check for self-assignment
		{ 
            // Free existing memory
            delete[] data;
            length = other.length;
            // Allocate new memory and copy elements
            data = new T[length];
            for (unsigned int i = 0; i < length; ++i)
                data[i] = other.data[i];
        }
        return *this;
    }
    // Destructor
    ~Array() {
        delete[] data; // Deallocate memory
    }
    // Subscript operator
    T& operator[](unsigned int index)
	{
        if (index >= length)
            throw std::out_of_range("Index out of range");
        return data[index];
    }
    // Member function size()
    unsigned int size() const {
        return length;
    }
};

#endif // ARRAY_HPP
