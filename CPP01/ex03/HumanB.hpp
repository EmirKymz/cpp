#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    public:
        std::string name;
        Weapon Weapons;
        void attack(void) const;
    private:

};

#endif