#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#include <iostream>
#include <map>
#include <sstream>
#include <fstream>
#include <string>

class BitcoinExchange {
    public:
        std::map<std::string, double> data;
        std::map<std::string, double> exchange;

        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &b);
        BitcoinExchange& operator=(const BitcoinExchange &b);

        void readData();
        bool    DateCheck(std::string key_s);
        bool    AlphCheck(std::string value);
        double  give_back_data(std::string key, double value);
};

#endif