#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap is created" << std::endl;
}

FragTrap::FragTrap(const std::string &name, unsigned int hitPoint, unsigned int energyPoint, unsigned int attackDamage) : ClapTrap(name, hitPoint, energyPoint, attackDamage)
{
	std::cout << "FragTrap " << name << " is created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap)
{
	std::cout << "FragTrap " << name << " is created" << std:endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &fragTrap)
{
	this->name = fragTrap.name;
	this->hit
