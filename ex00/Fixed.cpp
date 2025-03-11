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
    std::cout <<"getRawBits member function called" << std::endl;
    return (this->nbr);
}

void Fixed::setRawBits(const int raw)
{
    std::cout <<"setRawBits member function called" << std::endl;
    this->nbr = raw;
}