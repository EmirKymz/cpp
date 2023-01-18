#pragma once

#include <string>
#include <iostream>

class Fixed {
	private:
		static const int _fractional = 8;
		int _fixed;
	public:
		Fixed();
		Fixed(const Fixed&);
		Fixed& operator=(const Fixed&);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const);
        const int frac = 8;
        const float num; //???? sor
        float toFloat(void) const;
        int toInt(void) const;
};