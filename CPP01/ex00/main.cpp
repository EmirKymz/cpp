#include "Zombie.hpp"

void init_zombie(void)
{
    Zombie asd("Crazy");
    asd.announce();
    Zombie* foo = newZombie("Foo");
    randomChump("Flash");
    delete foo;
}

int main()
{
    init_zombie();
}