#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon {
    public:
        Weapon(std::string _type);
        ~Weapon();
        std::string getType() const;
        void setType(std::string);
    private:
        std::string type;
};

#endif