#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	// {
	// 	std::cout << "\n\n\nTest3" << std::endl;
	// 	FragTrap a;
	// 	FragTrap b = a;
	// }
	{
		FragTrap a("Eyup");
		FragTrap b;
		ScavTrap c("Emir");
		c.setAttackD(10);
		c.attack(a.getName());
	}
}