#pragma once

#include "Fixed.hpp"

class point {
    private:
        Fixed const _x;
        Fixed const _y;
    public:
        point();
        point(float const& x, float const& y);
        point(point const&);
        point& operator=(const point&);
        ~point();

        Fixed get_x() const;
        Fixed get_y() const;
};

bool bsp(point const a, point const b, point const c, point const point);
std::ostream & operator<<(std::ostream &, const point &);