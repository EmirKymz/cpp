#include "Harl.hpp"



int main(int ac, char **av)
{
    if(ac != 2)
        return(0);
    Harl status;
    std::string harlstatus(av[1]);
    status.complain(harlstatus);
}