/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 03:54:54 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/01/22 04:30:27 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
#include  <string>

class Fixed {
	private:
		static const int _fractional = 8;
		int _fixed;
	public:
		Fixed();
		Fixed(const Fixed&);
		Fixed(const int);
		Fixed(const float);
		~Fixed();

        //comparison operators
        bool operator>(const Fixed&) const;
        bool operator<(const Fixed&) const;
        bool operator>=(const Fixed&) const;
        bool operator<=(const Fixed&) const;
        bool operator==(const Fixed&) const;
        bool operator!=(const Fixed&) const;
		
        //arithmetic operators
        Fixed operator+(const Fixed&) const;
        Fixed operator-(const Fixed&)const;
        Fixed operator*(const Fixed&)const;
        Fixed operator/(const Fixed&)const;

        //assignment operator
        Fixed& operator=(const Fixed&);

        //min max
        static const Fixed& min(const Fixed &, const Fixed &);
        static const Fixed& max(const Fixed &, const Fixed &);

        //++ --
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);




		int getRawBits(void) const;
		void setRawBits(int const);
		
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream & operator<<(std::ostream &o, const Fixed &f);