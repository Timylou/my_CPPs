/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:41:08 by yel-mens          #+#    #+#             */
/*   Updated: 2026/01/19 20:41:10 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/******************* CONSTRUCTORS ********************/

Cure::Cure(void)	:	AMateria("cure") {}

Cure::Cure(Cure const &other)	:	AMateria(other.getType()) {}

/******************** OPERATOR *********************/

Cure	&Cure::operator=(Cure const &other) {(void)other; return (*this);}

/******************* DESTRUCTOR ********************/

Cure::~Cure(void) {}

/********************* METHODS *********************/

AMateria	*Cure::clone(void) const {return (new Cure(*this));}

void	Cure::use(ICharacter &target) {std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;}
