/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:11:16 by yel-mens          #+#    #+#             */
/*   Updated: 2026/01/08 19:11:17 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/******************* CONSTRUCTOR ********************/

WrongAnimal::WrongAnimal(void)	:	_type("Prototype") {std::cout << "WrongAnimal constructor called" << std::endl;}

WrongAnimal::WrongAnimal(std::string type)	:	_type(type) {std::cout << "Type WrongAnimal constructor called" << std::endl;}

WrongAnimal::WrongAnimal(const WrongAnimal &other)	:	_type(other.getType()) {std::cout << "WrongAnimal copy constructor called" << std::endl;}

/******************** OPERATOR *********************/

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal assignment constructor called" << std::endl;
	this->_type = other.getType();
	return (*this); 
}

/******************* DESTRUCTOR ********************/

WrongAnimal::~WrongAnimal(void) {std::cout << "WrongAnimal destructor called" << std::endl;}

/********************* GETTER *********************/

std::string const	&WrongAnimal::getType(void) const	{return (_type);}

void	WrongAnimal::makeSound(void) const	{std::cout << "WrongAnimal sound : ..." << std::endl;}