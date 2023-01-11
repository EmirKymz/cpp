#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <stddef.h>
#include <limits>

class contact {
public:
    std::string get_name();
    std::string get_surname();
    std::string get_nick();
    std::string get_num();
    std::string get_secret();

    void        set_name(std::string);
    void        set_surname(std::string);
    void        set_nick(std::string);
    void        set_num(std::string);
    void        set_secret(std::string);


private:
    std::string first_name;
    std::string surname;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
} ;

class phonebook {
public:
    contact people[8];
    int index;
    int getnuminput();
} ;

#endif