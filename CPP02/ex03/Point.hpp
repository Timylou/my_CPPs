/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:17:25 by yel-mens          #+#    #+#             */
/*   Updated: 2025/12/01 14:17:26 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	private	:
		const Fixed	_x;
		const Fixed	_y;

	public	:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &other);
		Point	&operator=(const Point &other);
		~Point(void);
		
		Fixed const	getX(void) const;
		Fixed const	getY(void) const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif