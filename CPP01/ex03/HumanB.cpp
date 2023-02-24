/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:33:03 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/01/22 01:33:04 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::~HumanB(){}
HumanB::HumanB(std::string _name): name(_name){}

void HumanB::setWeapon(Weapon &a)
{
    this->Weapons = &a;
}

void HumanB::attack(void) const
{
    std::cout << this->name << " attacks with their "
            << this->Weapons->getType() << std::endl;
}