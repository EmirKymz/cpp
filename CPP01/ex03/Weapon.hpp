#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon {
    public:
        Weapon();
        Weapon(std::string _type);
        ~Weapon();
        std::string getType() const;
        void    setType(std::string _type);
    private:
        std::string& type;
};

#endif