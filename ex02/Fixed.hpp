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

        bool operator>(const Fixed &fixed) const;
        bool operator<(const Fixed &fixed) const;
        bool operator>=(const Fixed &fixed) const;
        bool operator<=(const Fixed &fixed) const;
        bool operator==(const Fixed &fixed) const;
        bool operator!=(const Fixed &fixed) const;

        Fixed operator+(const Fixed &fixed) const;
        Fixed operator-(const Fixed &fixed) const;
        Fixed operator*(const Fixed &fixed) const;
        Fixed operator/(const Fixed &fixed) const;

        Fixed &operator++(void);
        Fixed &operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);





        

        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float	toFloat(void) const;
		int		toInt(void) const;

        static Fixed &min(Fixed &f1,Fixed &f2);
        static Fixed &max(Fixed &f1,Fixed &f2);
        static const Fixed &min(const Fixed &f1,const Fixed &f2);
        static const Fixed &max(const Fixed &f1,const Fixed &f2);

};
std::ostream	&operator<<(std::ostream &o, const Fixed &fixed);
#endif