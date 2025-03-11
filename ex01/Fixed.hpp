#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed{
    private:
        int nbr;
        static const int fracBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &fixed);
        Fixed(const int n);
		Fixed(const float f);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float	toFloat(void) const;
		int		toInt(void) const;

};
std::ostream	&operator<<(std::ostream &o, const Fixed &fixed);
#endif