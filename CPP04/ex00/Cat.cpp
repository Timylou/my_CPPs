/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:19:53 by yel-mens          #+#    #+#             */
/*   Updated: 2026/01/08 19:19:59 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

/******************* CONSTRUCTOR ********************/

Cat::Cat(void)	:	Animal("Cat") {std::cout << "Cat constructor called" << std::endl;}

Cat::Cat(const Cat &other)	:	Animal(other) {std::cout << "Cat copy constructor called" << std::endl;}

/******************** OPERATOR *********************/

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment constructor called" << std::endl;
	this->_type = other.getType();
	return (*this);
}

/******************* DESTRUCTOR ********************/

Cat::~Cat(void) {std::cout << "Cat destructor called" << std::endl;}

void	Cat::makeSound(void) const	{std::cout << "MIAOUUUU" << std::endl;}
