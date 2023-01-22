/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:30:55 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/01/21 22:30:56 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 0, n = -1;
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return(0);
    }
	while(av[++i]){
		n = -1;
        while(av[i][++n] && ac >= 2){
            std::cout << (char)std::toupper(av[i][n]);
    	}
		if(av[i + 1])
			std::cout << " ";
	}
}
