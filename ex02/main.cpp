#include "Fixed.hpp"

static std::string	boolToStr(bool b)
{
	if (b)
		return ("true");
	return ("false");
}

static void	testComparison(void)
{
	std::cout<<"*****************Comparison Test********************"<<std::endl;
	Fixed	a(4.95f);
	Fixed	b(5);

	std::cout << "a = " << a << "  b = " << b << std::endl;
	std::cout << "  a > b ? " << boolToStr(a > b) << std::endl;
	std::cout << "  a < b ? " << boolToStr(a < b) << std::endl;
	std::cout << "  a >= b ? " << boolToStr(a >= b) << std::endl;
	std::cout << "  a <= b ? " << boolToStr(a <= b) << std::endl;
	std::cout << "  a == b ? " << boolToStr(a == b) << std::endl;
	std::cout << "  a != b ? " << boolToStr(a != b) << std::endl;
	b = a;
	std::cout << "a = " << a << "  b = " << b << std::endl;
	std::cout << "  a > b ? " << boolToStr(a > b) << std::endl;
	std::cout << "  a < b ? " << boolToStr(a < b) << std::endl;
	std::cout << "  a >= b ? " << boolToStr(a >= b) << std::endl;
	std::cout << "  a <= b ? " << boolToStr(a <= b) << std::endl;
	std::cout << "  a == b ? " << boolToStr(a == b) << std::endl;
	std::cout << "  a != b ? " << boolToStr(a != b) << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "  a > a ? " << boolToStr(a > a) << std::endl;
	std::cout << "  a < a ? " << boolToStr(a < a) << std::endl;
	std::cout << "  a >= a ? " << boolToStr(a >= a) << std::endl;
	std::cout << "  a <= a ? " << boolToStr(a <= a) << std::endl;
	std::cout << "  a == a ? " << boolToStr(a == a) << std::endl;
}


static void	arithmeticTesting(void)
{
	std::cout<<"*****************Aretmethic Test************************"<<std::endl;
	Fixed	a(4.95f);
	Fixed	b(5);

	std::cout << "a = " << a << "  b = " << b << std::endl;
	std::cout << "  a + b = " << a + b << std::endl;
	std::cout << "  a + a = " << a + a << std::endl;
	std::cout << "  a - b = " << a - b << std::endl;
	std::cout << "  a * b = " << a * b << std::endl;
	std::cout << "  a / b = " << a / b << std::endl;
}

static void	maxMinTesting(void)
{
	std::cout<<"****************MAX/MIN Test*****************"<<std::endl;
	Fixed		a(-5.25f);
	Fixed		b(-2);
	Fixed const	c(-3);

	std::cout << "a = " << a << "  b = " << b << std::endl;
	std::cout << "  max(a,b) = " << Fixed::max(a, b) << std::endl;
	std::cout << "  min(a,b) = " << Fixed::min(a, b) << std::endl;
	std::cout << "a = " << a << "  c(const) = " << c << std::endl;
	std::cout << "  max(a,c) = " << Fixed::max(a, c) << std::endl;
	std::cout << "  min(a,c) = " << Fixed::min(a, c) << std::endl;
}

static void	subjectTesting(void)
{
	std::cout<<"**************subject test*****************"<<std::endl;
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
}

int main( void ) {

    testComparison();
    arithmeticTesting();
    maxMinTesting();
    subjectTesting();
    return 0;
}