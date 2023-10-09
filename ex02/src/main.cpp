#include "PmergeMe.hpp"

int main(int ac, char **av) {
    if (ac < 2) {
        std::cout << "Give me more numbers" << std::endl;
        return(1);
    }
    PmergeMe a(ac, av);
    a.Info_begin(0);
    a.mergeVector();
    a.mergeDeque();
}