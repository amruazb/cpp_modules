/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:38:08 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 13:38:11 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringptr = & brain;
	std::string &stringref = brain;
   	std::cout << "************************************" << std::endl;
	std::cout << "          STRING VALUE              " << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "String : " << brain << std::endl;
	std::cout << "String Pointer : " << *stringptr << std::endl;
	std::cout << "String Reference : " << stringref << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "          MEMORY ADDRESS            " << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "String : " << &brain << std::endl;
	std::cout << "String Pointer : " << stringptr << std::endl;
	std::cout << "String Reference : " << &stringref << std::endl;
}

