#include "BitcoinExchange.hpp"


/* void    BitcoinExchange::printData() {
    std::map<std::string, double>::iterator it;
    for(it = data.begin(); it != data.end(); ++it){
        std::cout << "--| " << it->first << "  " << it->second << std::endl;
    }
} */

void BitcoinExchange::readData() {
    std::ifstream file("data.csv");
    if(file.is_open()) {
        std::string line;
        while(std::getline(file, line)) {
            std::istringstream ss(line);
            std::string key;
            double value;
            
            if(std::getline(ss, key, ',') && ss >> value){
                data[key] = value;
            }
        }
        //printData();
        file.close();
    }
    else {
        std::cerr << "Error: Data file is not opened!" << std::endl;
    }
}

double BitcoinExchange::give_back_data(std::string key, double value) {
    std::map<std::string, double>::iterator it = data.upper_bound(key);
    if (it != data.begin())
        return((--it)->second * value);
    return(0);
}