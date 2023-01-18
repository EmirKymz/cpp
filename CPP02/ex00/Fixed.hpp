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
};

/* int a pointer adrewsi 0x777

&a pointer adresi 0x777

*a pointer adresi 0x770 */