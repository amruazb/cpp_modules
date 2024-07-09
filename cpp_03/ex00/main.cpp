/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:39:39 by aabashee          #+#    #+#             */
/*   Updated: 2024/07/04 13:39:43 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("hi", 10, 1, 1);
	clapTrap.attack("Enemy");
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(5);
		clapTrap.displayStats();
}

