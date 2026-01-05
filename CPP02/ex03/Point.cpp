/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:17:19 by yel-mens          #+#    #+#             */
/*   Updated: 2025/12/01 14:17:19 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/********************* CONSTRUCTORS *******************/

Point::Point(void)	:	_x(Fixed(0)), _y(Fixed(0)) {}

Point::Point(const float x, const float y)	:	_x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(const Point &other)	:	_x(Fixed(other._x)), _y(Fixed(other._y)) {}

/*********************** OPERATOR *********************/

Point	&Point::operator=(const Point &other)
{
	(void)	other;
	return (*this);
}

/************************ GETTER *********************/

Fixed const	Point::getX() const
{
	return (this->_x);
}

Fixed const	Point::getY() const
{
	return (this->_y);
}

/********************** DESTRUCTOR *******************/

Point::~Point(void)	{}
