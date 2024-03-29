/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:32:41 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/02/28 22:25:47 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
        const std::string Name;
        
    public:
    Zombie();
    Zombie(std::string name);
    void announce( void ) const;
};

    void start_horde(void);
    Zombie* zombieHorde( int N, std::string name );

#endif