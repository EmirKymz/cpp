#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    public:
        std::string name;
        Weapon* Weapons;
        void attack(void) const;
        ~HumanB();
        void setWeapon(Weapon &a);
        HumanB(std::string _name);
    private:

};

#endif