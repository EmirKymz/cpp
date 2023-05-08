/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 04:30:37 by ekaymaz           #+#    #+#             */
/*   Updated: 2023/03/01 22:09:01 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//constructor destructor vs
Fixed::Fixed() : _fixed(0)
{std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(const Fixed& copy): _fixed(copy.getRawBits())
{std::cout << "Copy constructor called" << std::endl;}

Fixed::Fixed(const int nbr) : _fixed(nbr << _fractional) 
{std::cout << "Int constructor called" << std::endl;}

Fixed::Fixed(const float nbr) : _fixed(roundf(nbr * (1 << _fractional)))
{std::cout << "Float constructor called" << std::endl;}

Fixed& Fixed::operator=(const Fixed& nbr){
	std::cout << "Copy assigment operator called" << std::endl;
	if(this != &nbr)
		_fixed = nbr.getRawBits();
	return(*this);
}

Fixed::~Fixed()
{std::cout << "Destructor called" << std::endl;}

//gettr settr
int Fixed::getRawBits(void) const {return(this->_fixed);}
void Fixed::setRawBits(int const nbr){this->_fixed = nbr;}

//toint tofloat
float Fixed::toFloat(void) const 
{return((float)getRawBits() / (1 << _fractional));}

int Fixed::toInt() const
{return (getRawBits() >> _fractional);}

std::ostream & operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return o;
}

//comparison operators
bool	Fixed::operator>(const Fixed &n) const
{return(this->_fixed > n.getRawBits());}

bool Fixed::operator<(const Fixed &n) const
{return(this->_fixed < n.getRawBits());}

bool Fixed::operator>=(const Fixed &n) const
{return(this->_fixed >= n.getRawBits());}

bool Fixed::operator<=(const Fixed &n) const
{return(this->_fixed <= n.getRawBits());}

bool Fixed::operator==(const Fixed& n) const
{return(this->_fixed == n.getRawBits());}

bool Fixed::operator!=(const Fixed& n) const
{return(this->_fixed != n.getRawBits());}

//arithmetic operators
Fixed Fixed::operator+(const Fixed& n) const
{return(Fixed(this->toFloat() + n.toFloat()));}

Fixed Fixed::operator-(const Fixed& n) const
{return(Fixed(this->toFloat() - n.toFloat()));}

Fixed Fixed::operator*(const Fixed& n) const
{return(Fixed(this->toFloat() * n.toFloat()));}

Fixed Fixed::operator/(const Fixed& n) const
{return(Fixed(this->toFloat() / n.toFloat()));}

//min max
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return(a.getRawBits() < b.getRawBits()) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return(a.getRawBits() > b.getRawBits()) ? a : b;
}
//++ --
Fixed &Fixed::operator++(void)
{
	this->_fixed++;
	return(*this);
}
Fixed Fixed::operator++(int)
{
	Fixed a(this->toFloat());
	this->_fixed++;
	return(a);
}

Fixed &Fixed::operator--(void)
{
	this->_fixed--;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed a(this->toFloat());
	this->_fixed--;
	return(a);
}