#include "Zombie.hpp"

int main(void)
{
	int numZombies = 5;
	Zombie* horde = zombieHorde(numZombies, "HordeZombie");
	delete[] horde;
}


