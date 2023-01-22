/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 04:31:52 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/01/22 06:25:37 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	point a(3, 5);
	point b(1, 1);
	point c(5, 1);

	//false
	std::cout << "t" << bsp(a, b, c, point(3, 3)) << std::endl;
	//True
	std::cout << "x" << bsp(a, b, c, point(2, 4)) << std::endl;

	return 0;
}