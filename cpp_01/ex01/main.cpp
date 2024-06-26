/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:36:20 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 13:36:22 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int numZombies = 5;
	Zombie* horde = zombieHorde(numZombies, "HordeZombie");
	delete[] horde;
}


