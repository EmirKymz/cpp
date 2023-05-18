#include "iter.hpp"

void printstr(const std::string &str) {
    std::cout << str << "   ";
}

void printnbr(const int &nbr) {
    std::cout << nbr << "   ";
}

int main() {
    std::cout << std::setw(10) <<YEL << std::left << "TEST 1" <<std::endl;
    std::string arr[2] = {"Emir", "Kymz"};
    iter(arr, 2, printstr);
    std::cout<< std::endl << std::setw(10) <<BLUE << "TEST 2" << std::endl;
    int arry[4] = {20, 12, 11, 4};
    iter(arry, 4, printnbr);
}