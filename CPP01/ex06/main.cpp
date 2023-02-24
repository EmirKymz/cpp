/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:34:25 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/01/22 01:34:26 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"



int main(int ac, char **av)
{
    if(ac != 2)
        return(0);
    Harl status;
    std::string harlstatus(av[1]);
    status.complain(harlstatus);
}