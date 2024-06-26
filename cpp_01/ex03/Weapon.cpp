/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:39:49 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 13:39:51 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) :_type(weaponType)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(std::string weaponType)
{
	this->_type = weaponType;
}
