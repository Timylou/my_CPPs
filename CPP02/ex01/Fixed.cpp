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

Fixed::Fixed(void) : _value(0) {std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(const int value) : _value(value << this->_bits) {std::cout << "Int constructor called" << std::endl;}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << this->_bits))) {std::cout << "Float constructor called" << std::endl;}

Fixed::Fixed(const Fixed &other) : _value(other._value) {std::cout << "Copy constructor called" << std::endl;}

/********************** DESTRUCTOR ********************/

Fixed::~Fixed(void) {std::cout << "Destructor called" << std::endl;}

/*********************** OPERATORS ********************/

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_value = other._value;
	return (*this);
}

std::ostream	&operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

/*********************** CONVERTERS *******************/

float	Fixed::toFloat(void) const {return ((float)_value / (float)(1 <<_bits));}

int		Fixed::toInt(void) const {return (_value >> _bits);}

/************************ GETTER **********************/

int	Fixed::getRawBits(void) const {return (this->_value);}

/************************ SETTER ***********************/

void	Fixed::setRawBits(int const raw) {this->_value = raw;}