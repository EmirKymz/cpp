#include "Fixed.hpp"

Fixed::Fixed() : _fixed(0)
{std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(const Fixed& copy) : _fixed(copy.getRawBits())
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int nbr) : _fixed(nbr << _fractional) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr) : _fixed(roundf(nbr * (1 << _fractional))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& nbr){
    std::cout << "Copy assigment operator called" << std::endl;
    if(this != &nbr)
        _fixed = nbr.getRawBits();
    return(*this);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {return(this->_fixed);}
void Fixed::setRawBits(int const nbr){this->_fixed = nbr;}

float Fixed::toFloat(void) const {
    return((float)getRawBits() / (1 << _fractional));
}

int Fixed::toInt() const
{
    return (getRawBits() >> _fractional);
}

std::ostream & operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return o;
}