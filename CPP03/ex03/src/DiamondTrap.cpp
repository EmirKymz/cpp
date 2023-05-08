#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("defaultDT_clap_trap")
{
	this->_vName = "defaultDT";
	this->setHitP(FragTrap::getHitP());
	this->setEnergyP(ScavTrap::getEnergyP());
	this->setAttackD(FragTrap::getAttackD());
	std::cout  << this->_vName << " Named DiamondTrap has been constructed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << this->_vName << " Hahaha DiamondTrap's copy constructer called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap") 
{
	this->_vName = name;
	this->setHitP(FragTrap::getHitP());
	this->setEnergyP(ScavTrap::getEnergyP());
	this->setAttackD(FragTrap::getAttackD());
	std::cout << "DiamondTrap constructor name " << this->_vName << " called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_vName << " is closed with DiamondTrap destructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	this->_vName = copy.getName();
	this->setHitP(copy.getHitP());
	this->setAttackD(copy.getAttackD());
	this->setEnergyP(copy.getEnergyP());
	std::cout << "DiamondTrap's copy assignment called." << std::endl;
	return(*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am a DiamondTrap named "<< this->_vName << " and i am ClapTrap named " << ClapTrap::getName() << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}