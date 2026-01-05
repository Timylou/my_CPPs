/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:21:08 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/24 19:21:09 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void )
{
	Point	a(1.0f, 0.0f);
	Point	b(0.0f, 1.0f);
	Point	c(2.0f, 1.0f);
	Point	p(1.0f, 0.5f);

	if (bsp(a, b, c, p))
		std::cout << "point is in triangle" << std::endl;
	else
		std::cout << "point is out triangle" << std::endl;
	return 0;
}