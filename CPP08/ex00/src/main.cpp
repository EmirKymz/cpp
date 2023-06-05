#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    for(int i = 0; i < 10; i++) {
        vec.push_back(i);
    }

    std::list<int> lst;
    for(int i = 0; i < 10; i++) {

        lst.push_back(i * 10);
    }

    try {
        std::vector<int>::iterator vecResult = easyfind(vec, 8);
        std::cout << "Found value in vector: " << *vecResult << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::list<int>::iterator lstResult = easyfind(lst, 25);
        std::cout << "Found value in list: " << *lstResult << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}