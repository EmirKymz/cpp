#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->setHitP(100);
	this->setEnergyP(50);
	this->setAttackD(20);
	this->_gate_keeper = false;
	std::cout << "ScavTrap has been Default Constructed.";
}

ScavTrap::ScavTrap(const ScavTrap & copy): ClapTrap(copy)
{
	*this = copy;
	this->_gate_keeper = copy._gate_keeper;
	std::cout << "ScavTrap's copy constructer called.";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap has been destroyed." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap & op)
{
	this->setName(op.getName());
	this->setHitP(op.getHitP());
	this->setEnergyP(op.getEnergyP());
	this->setAttackD(op.getAttackD());
	std::cout << "ScavTrap's copy assignment operator called.";
	return(*this);

}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	this->setHitP(100);
	this->setEnergyP(50);
	this->setAttackD(20);
	this->_gate_keeper = false;
	std::cout << "ScavTrap String Constructor called" << std::endl;
}

// ^ == XOR
void ScavTrap::guardGate(){
	_gate_keeper ^= true;
	if(_gate_keeper)
		std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
	else
		std::cout << "ScavTrap is not keep the Gate" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if(this->getEnergyP() <= 0 && this->getHitP() <= 0)
		std::cout << "ScavTrap " << this->getName() << " is not able to attack " << target << ", because he has no energy points or hit points left." << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackD() << " point of damage!" << std::endl;
}