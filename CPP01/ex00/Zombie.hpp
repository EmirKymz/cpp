#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    public:
    void announce( void );
    void set_name(std::string);
    std::string get_name(void);
    Zombie();
    Zombie(std::string _Name);
    ~Zombie();

    private:
        std::string Name;
};

    Zombie* newZombie( std::string name );
    void randomChump( std::string name );

#endif