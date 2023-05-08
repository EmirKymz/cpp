#pragma once

#include <string>
#include <iostream>
// #include "ScavTrap.hpp"

class ClapTrap {
	private:
		std::string _name;
		int         _hit_p;
		int         _energy_p;
		int         _attack_d;

	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);


		std::string getName(void) const;
		int getHitP(void) const;
		int getEnergyP(void) const;
		int getAttackD(void) const;
		
		void setName(std::string);
		void setHitP(int);
		void setEnergyP(int);
		void setAttackD(int);
		
		//assignment operator
		ClapTrap& operator=(const ClapTrap&);

		//const destr vs
		ClapTrap();
		ClapTrap(const ClapTrap&);
		~ClapTrap();
		ClapTrap(std::string);

		// functions
		int getnuminput();
};
