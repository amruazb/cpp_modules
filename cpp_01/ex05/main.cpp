/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:40:53 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 13:40:56 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string complain;

	std::cout << "Enter the complain \"INFO/WARNING/ERROR/DEBUG\": ";
	std::cin >> complain;
	std::cout << std::endl;
	harl.complain(complain);

	return 0;
}
