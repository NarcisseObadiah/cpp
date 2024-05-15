/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 06:13:34 by mobadiah          #+#    #+#             */
/*   Updated: 2024/05/15 06:36:27 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Functions.hpp"

int main() {
    Base* basePtr = generate();
    identify(basePtr);
    identify(*basePtr);
    
    delete basePtr; // Clean up the allocated memory

    return 0;
}
