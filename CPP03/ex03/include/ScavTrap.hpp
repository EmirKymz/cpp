#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	private:
		bool _gate_keeper;
	public:
		ScavTrap();
		ScavTrap(const ScavTrap & copy);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap & copy);
		ScavTrap(std::string);

		void attack(const std::string& target);
		void guardGate();
};

#endif
