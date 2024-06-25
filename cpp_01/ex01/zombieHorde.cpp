#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return nullptr;

	Zombie* horde = new Zombie[N];
	for ( int i = 0; i < N; i++)
	{
		horde[i].setName(name + " " + std::to_string(i + 1));
		horde[i].announce();
	}
	return horde;
}

