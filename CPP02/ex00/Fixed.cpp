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

/********************* CONSTRUCTOR ********************/

Fixed::Fixed(void) : value(0) {}

Fixed::Fixed(const Fixed &other) : value(other.value) {}

/********************** DESTRUCTOR ********************/

Fixed::~Fixed(void) {}

/*********************** OPERATOR *********************/

Fixed	&Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->value = other.value;
	return (*this);
}

/************************ GETTER **********************/

int	Fixed::getRawBits(void) const {return (this->value);}

/************************ SETTER ***********************/

void	Fixed::setRawBits(int const raw) {this->value = raw;}