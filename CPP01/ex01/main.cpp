#include "Zombie.hpp"

int getnuminput()
{
    int a;
    std::cin >> a;
    if (std::cin.fail())
    {
        std::cout << "Wrong Choice. Enter again " << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return (-1);
    }
    return (a);
}

void start_horde(void)
{
    int N;
    std::string name = "ZombieHorde";
a:
    std::cout << "Give me a Number : ";
    if((N = getnuminput()) == -1)
        goto a;
    Zombie* horde = zombieHorde(N, name);
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete[] horde;
}

int main()
{
    start_horde();
}