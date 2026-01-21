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

#include "Animal.hpp"

/******************* CONSTRUCTOR ********************/

Animal::Animal(void)	:	_type("Prototype") {std::cout << "Animal constructor called" << std::endl;}

Animal::Animal(std::string type)	:	_type(type) {std::cout << "Type Animal constructor called" << std::endl;}

Animal::Animal(const Animal &other)	:	_type(other.getType()) {std::cout << "Animal copy constructor called" << std::endl;}

/******************** OPERATOR *********************/

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment constructor called" << std::endl;
	this->_type = other.getType();
	return (*this); 
}

/******************* DESTRUCTOR ********************/

Animal::~Animal(void) {std::cout << "Animal destructor called" << std::endl;}

/********************* GETTER *********************/

std::string const	&Animal::getType(void) const	{return (_type);}

void	Animal::makeSound(void) const	{std::cout << "Animal sound : ..." << std::endl;}