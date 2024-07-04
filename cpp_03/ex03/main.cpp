#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamondTrap("hi");

    diamondTrap.whoAmI();
    diamondTrap.attack("Enemy1");
    diamondTrap.guardGate();
    diamondTrap.highFivesGuys();
    diamondTrap.displayStats();

    return 0;
}