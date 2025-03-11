#include "Fixed.hpp"

Fixed::Fixed(): nbr(0)
{
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = fixed;
}

Fixed::Fixed(const int n):nbr(n * (1 << fracBits))
{
    std::cout<<"Int constructor called"<<std::endl;
}

Fixed::Fixed(const float f):nbr((int)roundf(f * (1 << fracBits)))
{
    std::cout<<"Float constructor called"<<std::endl;
}

Fixed &Fixed::operator = (const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &fixed)
        this->nbr = fixed.getRawBits();
    return (*this);
}



Fixed::~Fixed()
{
    std::cout << "Destractor called" << std::endl;
}




int Fixed::getRawBits(void) const{
    return (this->nbr);
}

void Fixed::setRawBits(const int raw)
{
    std::cout <<"setRawBits member function called" << std::endl;
    this->nbr = raw;
}

float	Fixed::toFloat(void) const
{
    return ((float)nbr/(1 << fracBits));
}


int	Fixed::toInt(void) const
{
	return ((int)(roundf((float)nbr / (1 << fracBits))));
}

std::ostream	&operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}