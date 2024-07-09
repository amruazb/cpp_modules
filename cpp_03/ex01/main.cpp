/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:40:11 by aabashee          #+#    #+#             */
/*   Updated: 2024/07/04 13:40:14 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
	ScavTrap scavTrap("hi");
	scavTrap.displayStats();
	scavTrap.attack("Enemy");
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(5);
		scavTrap.displayStats();
	scavTrap.guardGate();
}

