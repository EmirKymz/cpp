/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:31:12 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/01/22 00:56:17 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <fstream>
//#include <stddef.h> for linux purposes.
#include <limits>

class contact {
public:
    //get function
    std::string get_name();
    std::string get_surname();
    std::string get_nick();
    std::string get_num();
    std::string get_secret();
    //set function
    bool        set_name(std::string);
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
    int fixed;

    //functions
    int getnuminput();
    void add();
    void printbook();
    void checkerv1();

private:
    std::string takestring();
} ;

#endif