/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:32:12 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/01/22 01:32:13 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void init_zombie(void)
{
    Zombie asd("Crazy");
    asd.announce();
    Zombie* foo = newZombie("Foo");
    randomChump("Flash");
    delete foo;
}

int main()
{
    init_zombie();
}