#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    public:
        std::string name;
        Weapon Weapons;
        void attack(void) const;
        HumanA();
        ~HumanA();
        HumanA(std::string _name, Weapon _Weapons);
    private:

};

#endif