#include "ZombieHorde.hpp"

int main() {
    int numZombies = 5; // Number of zombies in the horde
    Zombie* horde = zombieHorde(numZombies, "HordeZombie");

    // Clean up the horde
    delete[] horde;

    return 0;
}
#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

#endif
#include "ZombieHorde.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0)
        return nullptr;

    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        horde[i].setName(name + "_" + std::to_string(i + 1));
        horde[i].announce();
    }
    return horde;
}

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

