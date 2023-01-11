#include "phonebook.hpp"

std::string contact::get_name() {return (this->first_name);}
std::string contact::get_surname() {return (this->surname);}
std::string contact::get_nick() {return (this->nickname);}
std::string contact::get_num() {return (this->phone_number);}
std::string contact::get_secret() {return (this->darkest_secret);}

void	contact::set_name(std::string _name) {this->first_name = _name;}
void	contact::set_surname(std::string _surname) {this->surname = _surname;}
void	contact::set_nick(std::string _nick) {this->nickname = _nick;}
void	contact::set_num(std::string _num) {this->phone_number = _num;}
void	contact::set_secret(std::string _secret) {this->darkest_secret = _secret;}