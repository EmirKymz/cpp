#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* zzombie = new Zombie;
    zzombie->set_name(name);
    zzombie->announce();
    return(zzombie);
}