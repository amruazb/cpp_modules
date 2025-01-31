/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:41:48 by aabashee          #+#    #+#             */
/*   Updated: 2024/07/04 13:41:54 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "Default ClapTrap is created" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name, unsigned int hitPoint, unsigned int energyPoint, unsigned int attackDamage)
	: name(name), hitPoint(hitPoint), energyPoint(energyPoint), attackDamage(attackDamage)
{
	std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	*this = clapTrap;
	std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap)
{
	this->name = clapTrap.name;
	this->hitPoint = clapTrap.hitPoint;
	this->energyPoint = clapTrap.energyPoint;
	this->attackDamage = clapTrap.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " is destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (energyPoint > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoint--;
	}
	else
	{
		std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint > 0 && this->hitPoint >= amount)
	{
		std::cout << "ClapTrap " << name << " is damaged " << amount << " of hit point!" << std::endl;
		this->hitPoint -= amount;
	}
	else
		std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
		this->hitPoint = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint > 0)
	{
		std::cout << "ClapTrap " << name << " is repaired " << amount << " of hit point!" << std::endl;
		this->hitPoint += amount;
		this->energyPoint--;
	}
	else
	{
		std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
	}
}

void	ClapTrap::displayStats() const
{
	std::cout << "ClapTrap " << name << " has " << hitPoint << " hit points, " << energyPoint << " energy points and " << attackDamage << " attack damage" << std::endl;
}