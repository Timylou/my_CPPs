/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:19:53 by yel-mens          #+#    #+#             */
/*   Updated: 2026/01/08 19:19:59 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/******************* CONSTRUCTOR ********************/

WrongCat::WrongCat(void)	:	WrongAnimal("WrongCat") {std::cout << "WrongCat constructor called" << std::endl;}

WrongCat::WrongCat(const WrongCat &other)	:	WrongAnimal(other) {std::cout << "WrongCat copy constructor called" << std::endl;}

/******************** OPERATOR *********************/

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat assignment constructor called" << std::endl;
	this->_type = other.getType();
	return (*this);
}

/******************* DESTRUCTOR ********************/

WrongCat::~WrongCat(void) {std::cout << "WrongCat destructor called" << std::endl;}

void	WrongCat::makeSound(void) const	{std::cout << "MIAOUUUU" << std::endl;}
