/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:17:12 by yel-mens          #+#    #+#             */
/*   Updated: 2025/12/01 14:17:14 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed	calcVector(Point const a, Point const b, Point const point)
{
	float	first;
	float	second;

	first = ((point.getX().toFloat() - b.getX().toFloat()) * (a.getY().toFloat() - b.getY().toFloat()));
	second = ((a.getX().toFloat() - b.getX().toFloat()) * (point.getY().toFloat() - b.getY().toFloat()));

	return Fixed(first - second);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	vAB = calcVector(a, b, point);
	Fixed	vBC = calcVector(b, c, point);
	Fixed	vCA = calcVector(c, a, point);

	if (vAB > 0 && vBC > 0 && vCA > 0)
		return (true);
	if (vAB < 0 && vBC < 0 && vCA < 0)
		return (true);
	return (false);
}
