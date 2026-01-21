/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 22:34:57 by yel-mens          #+#    #+#             */
/*   Updated: 2026/01/11 22:34:57 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

/******************* CONSTRUCTOR ********************/

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

/******************** OPERATOR *********************/

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain assignment constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

/******************* DESTRUCTOR ********************/

Brain::~Brain(void) {std::cout << "Brain destructor called" << std::endl;}
