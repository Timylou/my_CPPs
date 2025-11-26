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
#include <iostream>

void	getAll(Fixed &a, Fixed &b, Fixed &c)
{
	std::cout << "a : " << a.getRawBits() << std::endl
			  << "b : " << b.getRawBits() << std::endl
			  << "c : " << c.getRawBits() << std::endl;
}

int	main(void)
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	getAll(a, b, c);
	
	a.setRawBits(12);
	c = a;

	std::cout << std::endl;
	getAll(a, b, c);
	return (0);
}