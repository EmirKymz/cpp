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

        void readData();
        //void printData();
        bool    DateCheck(std::string key_s);
        double  give_back_data(std::string key, double value);
        class FileNotOpen : public std::exception {
            public:
                const char *what() const throw() {
                    return "Error: File can not opened.";
                }
        };
};

#endif