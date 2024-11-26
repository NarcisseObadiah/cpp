/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:49:54 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/27 21:48:06 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <sstream>

void generateRandomSequence(std::vector<int>& sequence, int size, int max_value) {
    srand(time(0));
    for (int i = 0; i < size; ++i) {
        sequence.push_back(rand() % max_value + 1);
    }
}

int main(int argc, char* argv[]) {
    std::vector<int> sequence;

    if (argc == 2 && std::string(argv[1]) == "--generate") {
        // Generate 3000 random integers between 1 and 10000
        generateRandomSequence(sequence, 3000, 10000);
    } else if (argc < 2) {
        std::cerr << "Error: No input provided." << std::endl;
        return 1;
    } else {
        try {
            for (int i = 1; i < argc; ++i) {
                int num = std::atoi(argv[i]);
                if (num <= 0) throw std::invalid_argument("Negative or zero value");
                sequence.push_back(num);
            }
        } catch (const std::exception& e) {
            std::cerr << "Error: Invalid input. " << e.what() << std::endl;
            return 1;
        }
    }

    PmergeMe pmerge(sequence);

    std::cout << "Before: ";
    for (std::vector<int>::const_iterator it = sequence.begin(); it != sequence.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    pmerge.sortWithVector();
    std::vector<int> sortedSequence = pmerge.getSortedSequence();

    std::cout << "After: ";
    for (std::vector<int>::const_iterator it = sortedSequence.begin(); it != sortedSequence.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Time to process a range of " << sequence.size() << " elements with std::vector: " 
              << pmerge.getSortingTime() << " us" << std::endl;

    PmergeMe pmergeDeque(sequence);
    pmergeDeque.sortWithDeque();

    std::cout << "Time to process a range of " << sequence.size() << " elements with std::deque: " 
              << pmergeDeque.getSortingTime() << " us" << std::endl;

    return 0;
}


