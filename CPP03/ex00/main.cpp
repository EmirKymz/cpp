#include "ClapTrap.hpp"

int main()
{
    {ClapTrap heap_of_metal("ClapTrack");
    ClapTrap heap_of_metalv1("Junkyard");
    heap_of_metal.setAttackD(10);
    heap_of_metalv1.beRepaired(15);
    heap_of_metal.attack(heap_of_metalv1.getName());
    heap_of_metalv1.takeDamage(heap_of_metal.getAttackD());}
    {
    std::cout << "\n\n\ntest2\n";
    ClapTrap heap_of_metal("ClapTrack2");
    ClapTrap heap_of_metalv1("Junkyard2");
    heap_of_metal.setAttackD(1);
    heap_of_metalv1.beRepaired(15);
    heap_of_metal.attack(heap_of_metalv1.getName());
    heap_of_metalv1.takeDamage(heap_of_metal.getAttackD());
    }
}