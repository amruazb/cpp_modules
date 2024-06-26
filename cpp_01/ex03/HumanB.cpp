/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:39:01 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 13:39:03 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :_name(name)
{
	return ;
}

HumanB::~HumanB(void)
{

}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << (*this->_weapon).getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	this->_weapon = &Weapon;
}
