#include <iostream>
#include <fstream>
#include <string>

class FileReplace
{
public:
    FileReplace(const std::string& filename, const std::string& s1, const std::string& s2) : filename(filename), s1(s1), s2(s2) {}

    void performReplace() {
        std::ifstream inputFile(filename);
        if (!inputFile.is_open()) {
            std::cerr << "Error opening file: " << filename << std::endl;
            return;
        }

        std::ofstream outputFile(filename + ".replace");
        if (!outputFile.is_open()) {
            std::cerr << "Error creating output file: " << filename + ".replace" << std::endl;
            inputFile.close();
            return;
        }

        std::string line;
        while (std::getline(inputFile, line)) {
            replaceAndWrite(line, s1, s2, outputFile);
            outputFile << '\n'; // Add newline after each line
        }

        std::cout << "Replacement complete. Check " << filename + ".replace" << std::endl;

        inputFile.close();
        outputFile.close();
    }

private:
    void replaceAndWrite(const std::string& line, const std::string& s1, const std::string& s2, std::ofstream& outputFile) {
        size_t pos = 0;
        size_t found = line.find(s1, pos);

        while (found != std::string::npos) {
            // Copy characters before the found string
            outputFile << line.substr(pos, found - pos);

            // Copy replacement string
            outputFile << s2;

            // Move the position after the found string
            pos = found + s1.length();

            // Find the next occurrence
            found = line.find(s1, pos);
        }
        // Copy the remaining characters in the line
        outputFile << line.substr(pos);
    }

    std::string filename;
    std::string s1;
    std::string s2;
};

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);

    FileReplace fileReplace(filename, s1, s2);
    fileReplace.performReplace();

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smallem <smallem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:35:27 by smallem           #+#    #+#             */
/*   Updated: 2023/12/12 14:43:46 by smallem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv) {
	
	if (argc == 4)
	{
		std::string in = std::string(argv[1]);
		std::ifstream inputFile(in);
		std::string s1 = std::string(argv[2]);
		std::string s2 = std::string(argv[3]);
		std::string line;

		if (!inputFile)
		{
			std::cout << "Failed to open the file: " << in << std::endl;
			return (1);
		}
		std::ofstream outputFile(in + ".replace");
		if (!outputFile)
		{
			inputFile.close();
			std::cout << "Failed to open the file: " << in + ".replace" << std::endl;
			return (1);
		}
		
		while (std::getline(inputFile, line)) {
			if (!s1.empty())
			{
				size_t pos;
				size_t start = 0;
				while ((pos = line.find(s1, start)) != std::string::npos ) {
					outputFile << line.substr(start, pos - start) << s2;
					start = pos + s1.length();
				}
				outputFile << line.substr(start) << std::endl;
			}
			else
				outputFile << line << std::endl;
		}	
		inputFile.close();
		outputFile.close();
	}
	else
	{
		std::cout << "Usage: " << argv[0] << " Filename s1 s2" << std::endl;
		return (0);
	}
	return (0);
}
