#include <iostream>
#include <string>

class Zombie {
public:
    Zombie(){ }
    Zombie(std::string name) : name(name) {}
    void announce() const {
        std::cout << "Braiiiiiiinnnssss..." << name << std::endl;
    }
private:
    std::string name;
};

Zombie* zombiesHorde(int N, std::string name) {
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        new(&horde[i]) Zombie(name);
    }
    return horde;
}

int main() {
    int N = 5;
    std::string name = "zombi";
    Zombie* horde = zombiesHorde(N, name);
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    for(int i = 0; i < N; i++) {
        horde[i].~Zombie();
    }
    delete[] horde;
    return 0;
}