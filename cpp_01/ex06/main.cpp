/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:41:40 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 13:41:42 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac !=2)
	{
		std::cout << "PLEASE ENTER A LEVEL | DEBUG | INFO | WARNING | ERROR |" << std::endl;
		return (0);
	}
	harl.complain(av[1]);

}
