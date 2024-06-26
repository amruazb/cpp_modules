/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:40:20 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 13:40:22 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main(int ac, char **av)
{
	(void)av;

	if (ac != 4)
	{
		std::cerr << "Try again with the correct format: ./sed filename str1 str2" << std::endl;
		exit (EXIT_FAILURE);
	}
	std::string filename = av[1];
	std::string str1 = av[2];
	std::string str2 = av[3];

	if (str1 == str2)
	{
		std::cerr << "str1 and str2 can't be equal" << std::endl;
	}

	std::ifstream file(filename); // (ifstream)input file stream class
	std::string newfilename;
	std::string content;
	char ch;

	if (!file.is_open())
	{
		std::cerr << "Invalid filename or No permission to access" << std::endl;
		file.close();
		exit (EXIT_FAILURE);
	}
	else
	{
		newfilename = filename + ".replace";
	}
	while (file.get(ch))
	{
		content.push_back(ch);
	}

	file.close();

	std::ofstream newfile(newfilename);
	if (newfile.is_open())
	{
		std::string modified_content;

		size_t startPos = 0;
		size_t foundPos = content.find(str1);
		while (foundPos != std::string::npos)
		{
			modified_content += content.substr(startPos, foundPos - startPos);
			modified_content += str2;

			startPos = foundPos + str1.length();
			foundPos = content.find(str1, startPos);
		}

		modified_content += content.substr(startPos);

		newfile << modified_content; // writing content to the new file
		newfile.close();
	}
	else
	{
		std::cerr << "Failed to create output file" << std::endl;
		exit(EXIT_FAILURE);
	}

	return 0;
}
