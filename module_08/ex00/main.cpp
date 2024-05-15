/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:14:18 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/15 09:17:29 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    int vec_array[] = {1, 2, 3, 4, 5};
    std::vector<int> vec(vec_array, vec_array + sizeof(vec_array) / sizeof(vec_array[0]));

    int lst_array[] = {10, 20, 30, 40, 50};
    std::list<int> lst(lst_array, lst_array + sizeof(lst_array) / sizeof(lst_array[0]));

    try {
        std::vector<int>::iterator vec_iter = easyfind(vec, 3);
        std::cout << "Value 3 found in vector at position: " << std::distance(vec.begin(), vec_iter) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::list<int>::iterator lst_iter = easyfind(lst, 40);
        std::cout << "Value 40 found in list at position: " << std::distance(lst.begin(), lst_iter) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        easyfind(vec, 10); // Value not present in vector
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
