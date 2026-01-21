/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:19:53 by yel-mens          #+#    #+#             */
/*   Updated: 2026/01/08 19:19:59 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

/******************* CONSTRUCTOR ********************/

Dog::Dog(void)	:	Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &other)	:	Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

/******************** OPERATOR *********************/

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignment constructor called" << std::endl;
	this->_type = other.getType();
	this->_brain = new Brain(*other._brain);
	return (*this);
}

/******************* DESTRUCTOR ********************/

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete (this->_brain);
}

void	Dog::makeSound(void) const	{std::cout << "BARK BARK" << std::endl;}