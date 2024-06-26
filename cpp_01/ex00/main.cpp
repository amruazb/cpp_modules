/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:35:16 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 13:35:19 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* zombie1 = newZombie("HeapZombie");
	zombie1->announce();
	delete zombie1;

	randomChump("STackZombie");
}

