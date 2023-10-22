#include "RPN.hpp"

int main(int ac, char* av[]) {
    if(ac != 2) {
        std::cerr << "Usage: " << av[0] << " expression" << std::endl;
        return(1);
    }
    RPN rpn;
    try {
        double result = rpn.evaluate(av[1]);
        std::cout << result << std::endl;
    } catch (MyExc e) {
        std::cout << e.what();
    }
    return 0;
}