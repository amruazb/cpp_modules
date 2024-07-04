#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("hi", 10, 1, 1);
	clapTrap.attack("Enemy");
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(5);
		clapTrap.displayStats();
}

