#include "Zombie.hpp"

void Zombie::announce (void)
{
    std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){};

Zombie::Zombie(std::string name) : Name(name) {}