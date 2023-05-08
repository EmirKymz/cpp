#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->setHitP(100);
	this->setEnergyP(100);
	this->setAttackD(30);
	std::cout << "FragTrap has been constructed.";
}

FragTrap::FragTrap(const FragTrap & copy): ClapTrap(copy)
{
	this->setHitP(copy.getHitP());
	this->setEnergyP(copy.getEnergyP());
	this->setAttackD(copy.getAttackD());
	this->highFivesGuys();
	std::cout << "FragTrap's copy constructer called.";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap has been destructed.";
}

FragTrap &FragTrap::operator=(const FragTrap & copy)
{
	this->setName(copy.getName());
	this->setAttackD(copy.getAttackD());
	this->setEnergyP(copy.getEnergyP());
	this->setHitP(copy.getHitP());
	std::cout << "FragTrap's copy assignment called.";
	return(*this);
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	this->setHitP(100);
	this->setEnergyP(100);
	this->setAttackD(30);
	this->highFivesGuys();
	std::cout << "FragTrap String Constructor called" << std::endl;
}


void FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " wants to high five to you." << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if(this->getEnergyP() <= 0 && this->getHitP() <= 0)
		std::cout << "FragTrap " << this->getName() << " is not able to attack " << target << ", because he has no energy points or hit points left." << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackD() << " point of damage!" << std::endl;
}