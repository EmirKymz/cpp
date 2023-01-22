#pragma once

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
		void setName(std::string);

		//assignment operator
		ClapTrap& operator=(const ClapTrap&);

		//const destr vs
		ClapTrap();
		ClapTrap(const ClapTrap&);
		~ClapTrap();

};