/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:14:56 by yel-mens          #+#    #+#             */
/*   Updated: 2026/03/27 11:38:46 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}
ScalarConverter::ScalarConverter(const ScalarConverter &other) {*this = other;}
ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &other) {(void)other; return (*this);}
ScalarConverter::~ScalarConverter(void) {}

static void	displayConvert(double c)
{
	if (c < 0 || c > 127)
		std::cout << "char: impossible" << std::endl;
	else if (c < 32 || c == 127)
		std::cout << "char: non-displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl
			  << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl
			  << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

static void		minInfConvert() {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << INT_MIN << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << __FLT_MIN__ << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << __DBL_MIN__ << std::endl;
}

static void		maxInfConvert() {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << INT_MAX << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << __FLT_MAX__ << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << __DBL_MAX__ << std::endl;
}

static void		nanConvert() {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << 0 << std::endl;
	std::cout << "float: " << "0.0f" << std::endl;
	std::cout << "double: " << "0.0" << std::endl;
}

void	ScalarConverter::convert(std::string literal)
{
	double	n;

	if (literal == "-inf" || literal == "-inff")
		minInfConvert();
	else if (literal == "+inf" || literal == "+inff")
		maxInfConvert();
	else if (literal == "nan" || literal == "nanf")
		nanConvert();
	else
	{
		if (literal.length() == 1 && std::isprint(literal[0]))
			n = literal[0];
		else
			n = atof(literal.c_str());
		displayConvert(n);
	}
}