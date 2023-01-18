#include "Fixed.hpp"

Fixed::Fixed() : _fixed(0) {std::cout << "Default constructor called" << std::endl;}
Fixed::Fixed(const Fixed& obj){
    *this = obj;
    std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        std::cout << "hello" << std::endl;
        this->_fixed = obj.getRawBits(); 
    }
    return (*this);
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed);
}

void Fixed::setRawBits(int const raw)  {
    this->_fixed = static_cast<int> (raw);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}