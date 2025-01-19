/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 21:02:32 by aabashee          #+#    #+#             */
/*   Updated: 2025/01/19 21:02:34 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./RPN \"<x> <y> <o>\"" << std::endl;
		return (1);
	}
	std::string str(argv[1]);

	if (str.empty() || str.find_first_not_of("\t ") == std::string::npos)
	{
		std::cerr << "Error: Invalid input" << std::endl;
		return (1);
	}
	RPN	rpn;
	rpn.run(argv[1]);
	return (0);
}
