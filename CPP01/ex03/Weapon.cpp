/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:33:20 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/01/22 01:33:21 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::~Weapon(){}
Weapon::Weapon(std::string _type): type(_type){}
std::string Weapon::getType() const {return(this->type);}
void Weapon::setType(std::string _type)
{
    this->type = _type;
}

