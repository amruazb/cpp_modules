#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap :  virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string &name, unsigned int hitPoint = 100, unsigned int energyPoint = 100, unsigned int attackDamage = 30);
	FragTrap(const FragTrap &fragTrap);
	FragTrap &operator=(const FragTrap &fragTrap);
	~FragTrap();

	void highFivesGuys(void);
};

#endif