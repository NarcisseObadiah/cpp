/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:20:47 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/27 22:50:25 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm> // For std::sort
#include <stdexcept> // For std::runtime_error

class Span {
private:
    unsigned int max_size;
    std::vector<int> numbers;

public:
    // Constructor
    Span(unsigned int N) : max_size(N) {}

    // Add a single number to the Span
    void addNumber(int number)
	{
        if (numbers.size() >= max_size)
            throw std::runtime_error("Span is full, cannot add more numbers");
        numbers.push_back(number);
    }

    // Find the shortest span between all the numbers stored
    int shortestSpan()
	{
        if (numbers.size() <= 1)
            throw std::runtime_error("Cannot find span, not enough numbers stored");
        std::sort(numbers.begin(), numbers.end());
        int shortest = numbers[1] - numbers[0];
        for (size_t i = 2; i < numbers.size(); ++i)
		{
            int span = numbers[i] - numbers[i - 1];
            if (span < shortest)
                shortest = span;
        }
        return shortest;
    }

    // Find the longest span between all the numbers stored
    int longestSpan()
	{
        if (numbers.size() <= 1)
            throw std::runtime_error("Cannot find span, not enough numbers stored");
        std::sort(numbers.begin(), numbers.end());
        return numbers.back() - numbers.front();
    }
};

#endif
