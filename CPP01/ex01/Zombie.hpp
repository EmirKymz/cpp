#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    public:
    Zombie();
    Zombie(std::string name);
    void announce( void ) const;

    private:
        mutable std::string Name;
};

    void start_horde(void);
    Zombie* zombieHorde( int N, std::string name );

#endif