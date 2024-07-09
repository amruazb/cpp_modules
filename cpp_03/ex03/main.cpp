/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:43:14 by aabashee          #+#    #+#             */
/*   Updated: 2024/07/04 13:43:16 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamondTrap("hi");

    diamondTrap.whoAmI();
    diamondTrap.attack("Enemy1");
    diamondTrap.guardGate();
    diamondTrap.highFivesGuys();
    diamondTrap.displayStats();

    return 0;
}