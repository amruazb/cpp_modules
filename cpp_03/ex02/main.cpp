/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:41:13 by aabashee          #+#    #+#             */
/*   Updated: 2024/07/04 13:41:20 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    FragTrap fragTrap("Fraggy");

    fragTrap.attack("Enemy1");
    fragTrap.takeDamage(20);
    fragTrap.beRepaired(10);

    fragTrap.displayStats();

    fragTrap.highFivesGuys();
}


