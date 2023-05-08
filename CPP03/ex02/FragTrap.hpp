#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(const FragTrap & copy);
		~FragTrap();
		FragTrap &operator=(const FragTrap & copy);
		FragTrap(std::string);

		void highFivesGuys(void);
		void attack(const std::string& target);
};

#endif
