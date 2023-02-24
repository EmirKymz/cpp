/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:32:49 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/01/22 01:32:50 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "Str memory adress: " << &brain << "\nstringPTR memory adress: " << &stringPTR << "\nstringREF memory adress: " << &stringREF << std::endl;
    std::cout << "\nStr: " << brain << "\nstringPTR: " << *stringPTR << "\nstringREF: " << stringREF << std::endl;
}
