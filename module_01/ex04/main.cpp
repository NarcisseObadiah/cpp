/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:21:51 by mobadiah          #+#    #+#             */
/*   Updated: 2024/01/18 15:05:19 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

void replaceString(std::ifstream& inputFile, std::ofstream& outputFile, const std::string& s1, const std::string& s2);

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        std::string input = std::string(argv[1]);
        std::ifstream inputFile(input);

        if (!inputFile.is_open())
        {
            std::cerr << "Error opening input file: " << input << std::endl;
            return EXIT_FAILURE;
        }

        std::string s1 = std::string(argv[2]);
        std::string s2 = std::string(argv[3]);

        std::ofstream outputFile(input + ".replace");

        if (!outputFile.is_open())
        {
            std::cerr << "Error creating output file." << std::endl;
            inputFile.close();
            return EXIT_FAILURE;
        }

        replaceString(inputFile, outputFile, s1, s2);

        inputFile.close();
        outputFile.close();
    }
    else
    {
        std::cout << "Wrong number of arguments" << std::endl;
    }

    return EXIT_SUCCESS;
}

void replaceString(std::ifstream& inputFile, std::ofstream& outputFile, const std::string& s1, const std::string& s2)
{
    std::string line;
    while (std::getline(inputFile, line))
    {
        if (!s1.empty())
        {
            size_t pos = 0;
            size_t found = line.find(s1, pos);

            while (found != std::string::npos)
            {
                outputFile << line.substr(pos, found - pos);
                outputFile << s2;
                pos = found + s1.length();
                found = line.find(s1, pos);
            }
            outputFile << line.substr(pos) << std::endl;
        }
        else
        {
            outputFile << line << std::endl;
        }
    }
}