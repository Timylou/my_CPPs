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

int main( void )
{
	Fixed a(12);
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a : " << a << std::endl
			  << "b : " << b << std::endl
			  << std::endl
			  << "a + b : " << a + b << std::endl
			  << "a - b : " << a - b << std::endl
			  << "a * b : " << a * b << std::endl
			  << "a / b : " << a / b << std::endl
			  << std::endl
			  << "++a : " << ++a << std::endl
			  << "a++ : " << a++ << std::endl
			  << "--b : " << --b << std::endl
			  << "b-- : " << b-- << std::endl
			  << std::endl
			  << "max(a, b) : " << Fixed::max(a, b) << std::endl
			  << "min(a, b) : " << Fixed::min(a, b) << std::endl;
	
	return 0;
}