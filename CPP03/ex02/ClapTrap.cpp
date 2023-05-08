#include "ClapTrap.hpp"

//amele edition
ClapTrap::ClapTrap() : _name("Default"), _hit_p(10), _energy_p(10), _attack_d(0)
{std::cout << _name << " is created with default constructor" << std::endl;}

ClapTrap::ClapTrap(const ClapTrap& n) {
	_name = n._name;
	_hit_p = n._hit_p;
	_energy_p = n._energy_p;
	_attack_d = n._attack_d;
	std::cout << _name << " is created with copy constructor" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& n) {
	_name = n._name;
	_hit_p = n._hit_p;
	_energy_p = n._energy_p;
	_attack_d = n._attack_d;
	return(*this);
}

ClapTrap::~ClapTrap() {std::cout << _name << " is closed with default destructor" << std::endl;}

std::string ClapTrap::getName(void) const {return(this->_name);}
int ClapTrap::getHitP(void) const {return(this->_hit_p);}
int ClapTrap::getEnergyP(void) const {return(this->_energy_p);}
int ClapTrap::getAttackD(void) const {return(this->_attack_d);}

void ClapTrap::setName(std::string name) {this->_name = name;}
void ClapTrap::setHitP(int hit_p) {this->_hit_p = hit_p;}
void ClapTrap::setEnergyP(int energyp) {this->_energy_p = energyp;}
void ClapTrap::setAttackD(int attackd) {
	std::cout << _name << "'s damage has been set " << attackd << std::endl;
	this->_attack_d = attackd;}



ClapTrap::ClapTrap(std::string name) : _name(name), _hit_p(10), _energy_p(10), _attack_d(0) 
{std::cout << _name << " is created with string constructor" << std::endl;}


void ClapTrap::attack(const std::string& target)
{
	if(this->_energy_p <= 0)
	{
		std::cout << "Cannot be attack. You don't have a energy" << std::endl;
		return ;
	}
	this->_energy_p--;
	std::cout << "ClapTrap " << this->getName() << " attacks to " << target; 
	std::cout << ", causing " << this->_attack_d << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_energy_p < (int)amount || _hit_p <= 0)
	{
		std::cout << "You don't have energypoint." << std::endl;
		return ;
	}
	else
	{
		this->_energy_p -= amount;
		this->_hit_p += amount;
		std::cout << _name << "'s repaired yourself new energy points : " << this->_energy_p;
		std::cout << " and new hit points : " << this->_hit_p << std::endl; 
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hit_p -= amount;
	if (_hit_p <= 0)
	{
		std::cout << _name << " takes a lot damage it can't handle it. It's hitpoints set to 0." << std::endl;
		_energy_p = 0;
	}
	else
		std::cout << _name << " takes " << amount << " damage, remain hitpoints: " << _hit_p << std::endl;
}