#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if(ac == 2) {
        try
        {
            BitcoinExchange btc;
            btc.changer(av);
        } catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
        
    } else {
        std::cout << "Error: Bad arguement." << std::endl;
    }
}