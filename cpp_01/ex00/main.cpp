#include "Zombie.hpp"

int main(void)
{
	Zombie* zombie1 = newZombie("HeapZombie");
	zombie1->announce();
	delete zombie1;

	randomChump("STackZombie");
}

