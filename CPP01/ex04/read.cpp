/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:33:34 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/01/22 01:33:54 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.hpp"

std::string replace(std::string line, std::string s1, std::string s2)
{
    size_t pos = 0;
while ((pos = line.find(s1, pos)) != std::string::npos) {
    line.erase(pos, s1.length());
    line.insert(pos, s2);
    pos += s2.length();
}

    return(line);
}

void readfile(char **av){
    std::string filename(av[1]);
    std::string s1(av[2]);
    std::string s2(av[3]);
    std::ifstream originalFile(filename);
    std::ofstream copyFile(filename.append(".replace"));
    std::string line;

    if(originalFile.is_open()){
        while(getline(originalFile, line)) {
            
            copyFile << replace(line, s1, s2) << std::endl;
        }
        originalFile.close();
    }

    else {
        std::cout << "Unable to open file" << std::endl;
    }
    copyFile.close();
}