#include "read.hpp"

int main(int ac, char **av){
    if(ac != 4){
        std::cout << "please enter a filename and two strings thanks" << std::endl;
        return(0);
    }
    readfile(av);
}