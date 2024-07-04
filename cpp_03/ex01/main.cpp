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

