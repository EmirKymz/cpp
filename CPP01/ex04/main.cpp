/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:33:28 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/01/22 01:33:29 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.hpp"

int main(int ac, char **av){
    if(ac != 4){
        std::cout << "please enter a filename and two strings thanks" << std::endl;
        return(0);
    }
    readfile(av);
}