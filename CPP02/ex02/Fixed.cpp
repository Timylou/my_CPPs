/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:21:23 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/24 19:21:25 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/********************* CONSTRUCTORS *******************/

Fixed::Fixed(void) : _value(0) {}

Fixed::Fixed(const int value) : _value(value << this->_bits) {}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << this->_bits))) {}

Fixed::Fixed(const Fixed &other) : _value(other._value) {}

/********************** DESTRUCTOR ********************/

Fixed::~Fixed(void) {}

/*********************** OPERATORS ********************/

Fixed	&Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->_value = other._value;
	return (*this);
}

bool	Fixed::operator>(const Fixed &other) const {return (this->_value > other.getRawBits());}

bool	Fixed::operator<(const Fixed &other) const {return (this->_value < other.getRawBits());}

bool	Fixed::operator>=(const Fixed &other) const {return (this->_value >= other.getRawBits());}

bool	Fixed::operator<=(const Fixed &other) const {return (this->_value <= other.getRawBits());}

bool	Fixed::operator==(const Fixed &other) const {return (this->_value == other.getRawBits());}

bool	Fixed::operator!=(const Fixed &other) const {return (this->_value != other.getRawBits());}

Fixed	Fixed::operator+(const Fixed &other) {return (Fixed(this->toInt() + other.toInt()));}

Fixed	Fixed::operator-(const Fixed &other) {return (Fixed(this->toInt()- other.toInt()));}

Fixed	Fixed::operator*(const Fixed &other) {return (Fixed(this->toFloat() * other.toFloat()));}

Fixed	Fixed::operator/(const Fixed &other) {return (Fixed(this->toFloat() / other.toFloat()));}

Fixed	&Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	operator++();
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	operator--();
	return (tmp);
}

std::ostream	&operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

/*********************** CONVERTERS *******************/

float	Fixed::toFloat(void) const {return ((float)_value / (float)(1 <<_bits));}

int		Fixed::toInt(void) const {return (_value >> _bits);}

/************************** MAX ***********************/

Fixed &	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed const &	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

Fixed const &	Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	return b;
}

/************************ GETTER **********************/

int	Fixed::getRawBits(void) const {return (this->_value);}

/************************ SETTER ***********************/

void	Fixed::setRawBits(int const raw) {this->_value = raw;}