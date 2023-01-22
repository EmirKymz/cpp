#include "Point.hpp"

Fixed point::get_x(void) const{return(this->_x);}
Fixed point::get_y(void) const{return(this->_y);}

point::point(): _x(0), _y(0) {}

point::point(float const& x, float const& y): _x(x), _y(y){}

point::point(point const& cpy): _x(cpy.get_x()), _y(cpy.get_y()){}

point::~point(){}

point & point::operator=(point const &n)
{
    (void)n;
    return *this;
}

std::ostream & operator<<(std::ostream &o, const point &p)
{
	o << "(x:" << p.get_x() << ", y:" << p.get_y() << ")";
	return o;
}
