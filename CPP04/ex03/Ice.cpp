/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:41:08 by yel-mens          #+#    #+#             */
/*   Updated: 2026/01/19 20:41:10 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/******************* CONSTRUCTORS ********************/

Ice::Ice(void)	:	AMateria("ice") {}

Ice::Ice(Ice const &other)	:	AMateria(other.getType()) {}

/******************** OPERATOR *********************/

Ice	&Ice::operator=(Ice const &other) {(void)other; return (*this);}

/******************* DESTRUCTOR ********************/

Ice::~Ice(void) {}

/********************* METHODS *********************/

AMateria	*Ice::clone(void) const {return (new Ice(*this));}

void	Ice::use(ICharacter &target) {std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;}
