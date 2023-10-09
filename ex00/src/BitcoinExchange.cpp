#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &c) {
    *this = c;
}
BitcoinExchange::~BitcoinExchange() {}
const BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &c) {
    this->data = c.data;
    this->exchange = c.exchange;
    return *this;
}
void BitcoinExchange::changer(char **av) {
    this->readData();
    std::ifstream infile(av[1]);
    if(!infile.is_open()){
        std::cout << "Error: Cant find file" << std::endl;
    }
    std::string line;
    std::getline(infile, line);
    while(std::getline(infile, line)) {
        std::istringstream iss(line);
        std::string key_s, value_s;
        if(std::getline(iss, key_s, '|') && std::getline(iss, value_s, '|')){
            key_s.erase(0, key_s.find_first_not_of(" \t\n\r\f\v"));
            key_s.erase(key_s.find_last_not_of(" \t\n\r\f\v") + 1);
            value_s.erase(0, value_s.find_first_not_of(" \t\n\r\f\v"));
            value_s.erase(value_s.find_last_not_of(" \t\n\r\f\v") + 1);
            if(this->DateCheck(key_s) == false) {
                std::cerr << "Error: Wrong Date => " << key_s << std::endl;
                continue;
            }
            double value;
            try {
            std::stringstream vs(value_s);
            vs >> value;
            } catch (std::exception &e) {
                std::cerr << "Error: invalid value in line: " << line << std::endl;
                continue;
            }
            if (value < 0) {
                std::cerr << "Error: not a positive number." << std::endl;
                continue;
            }
            if (value > 1000) {
                std::cerr << "Error: too large a number." << std::endl;
                continue;
            }
            this->exchange[key_s] = value;
        } else {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::cout << key_s << " ==> " << this->exchange[key_s] << " = " << this->give_back_data(key_s, this->exchange[key_s]) << std::endl;
    }
}
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

bool    BitcoinExchange::DateCheck(std::string key_s) {
    std::string date_day;
    std::string date_month;
    std::string date_year;
    size_t pos1;
    size_t pos2;

    pos1 = key_s.find("-");
    date_year = key_s.substr(0, pos1);
    pos2 = key_s.find("-", pos1 + 1);
    date_month = key_s.substr(pos1 + 1, pos2 - pos1 - 1);
    date_day = key_s.substr(pos2 + 1);
    if(date_year.length() == 4 || date_month.length() == 2 || date_day.length() == 2) {
        if(std::atoi(date_year.c_str()) <= 2008)
            ;
        else if(std::atoi(date_month.c_str()) > 12 || std::atoi(date_month.c_str()) < 1)
            ;
		else if(std::atoi(date_day.c_str()) > 31 || std::atoi(date_day.c_str()) < 1 )
            ;
		else if(std::atoi(date_year.c_str()) == 2009 && std::atoi(date_month.c_str()) == 1 && std::atoi(date_day.c_str()) == 1)
            ;
		else if(std::atoi(date_year.c_str()) == 2022) {
                if(std::atoi(date_month.c_str()) == 3)
			{
				if(std::atoi(date_day.c_str()) > 29)
                    ;
			}
			else if(std::atoi(date_month.c_str()) > 3)
                ;
		}
		else if(std::atoi(date_year.c_str()) > 2022)
            ;
		else
			return (true);
		return (false);
	}
	else
		return (false);
}
