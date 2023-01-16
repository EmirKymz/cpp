#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon(){}
Weapon::Weapon(std::string _type) : &type(_type) {}
Weapon::~Weapon(){}
HumanA::~HumanA(){}

std::string Weapon::getType() const{return(this->type);}

void Weapon::setType(std::string _type)
{
    this->type = _type;
}
void HumanA::attack(void) const
{
    std::cout << this->name << " attacks with their " << this->Weapons.getType() << std::endl;
}

void HumanB::attack(void) const
{
    std::cout << this->name << " attacks with their " << this->Weapons.getType() << std::endl;
}

HumanA::HumanA(){}
HumanA::HumanA(std::string _name, Weapon _Weapons) : name(_name), Weapons(_Weapons){}

int main()
{
    std::string tmp;
    Weapon club = Weapon("crude spiked club");
    HumanA Bob("Bob", club);
    Bob.attack();
    club.setType("some other type of club");
    Bob.attack();
return 0;
}