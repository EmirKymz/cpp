#include "DiamondTrap.hpp"

int main()
{
	// {
	// 	std::cout << "Test1" << std::endl;
	// 	ClapTrap v1("Heap_of_Metal");
	// 	FragTrap v2("Destroyer");

	// 	v1.setAttackD(15);
	// 	v2.beRepaired(5);
	// 	v1.attack(v2.getName());
	// 	v2.attack(v1.getName());
	// 	v2.takeDamage(v1.getAttackD());
	// 	v2.highFivesGuys();
	// }
	// {
	// 	std::cout << "\n\n\nTest2" << std::endl;
	// 	ClapTrap v1("Heap_of_Metal");
	// 	FragTrap v2("Destroyer");

	// 	v1.setAttackD(105);
	// 	v2.beRepaired(5);
	// 	v1.attack(v2.getName());
	// 	v2.attack(v1.getName());
	// 	v2.takeDamage(v1.getAttackD());
	// 	v2.highFivesGuys();
	// }
	{
		std::cout << "\n\n\n Test3" << std::endl;
		// ClapTrap v2("Destroyer");
		// ScavTrap v3("deneme");
		// FragTrap v4("Heaps");
		// DiamondTrap v1("Emir");
		DiamondTrap a;
		DiamondTrap c(a);
		DiamondTrap b;
		DiamondTrap d("Lord");
		a.whoAmI();
		c.whoAmI();
		a = b;
		b.whoAmI();
		d.whoAmI();
		d.attack(a.getName());
		// v1.attack(v3.getName());

		// v2.setAttackD(15);
		// v1.beRepaired(5);
		// v2.attack(v1.getName());
		// v1.takeDamage(v2.getAttackD());
		// v1.whoAmI();
	}
}