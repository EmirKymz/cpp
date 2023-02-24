/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:33:09 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/01/22 01:33:10 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    public:
        std::string name;
        Weapon* Weapons;
        void attack(void) const;
        ~HumanB();
        void setWeapon(Weapon &a);
        HumanB(std::string _name);
    private:

};

#endif