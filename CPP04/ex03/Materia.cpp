/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:49:15 by yel-mens          #+#    #+#             */
/*   Updated: 2026/01/19 18:49:16 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

/******************* CONSTRUCTORS ********************/

AMateria::AMateria(void)	:	_type("NO TYPE") {}
AMateria::AMateria(AMateria const &other)	:	_type(other.getType()) {}
AMateria::AMateria(std::string const &type)	:	_type(type) {}

MateriaSource::MateriaSource(void)
{
	for (int i=0; i < 4; i++)
		this->materia[i] = NULL;
}
MateriaSource::MateriaSource(MateriaSource const &other)
{
	for (int i=0; i < 4; i++)
		this->materia[i] = (other.materia[i])->clone();
}

/********************* OPERATORS *********************/

AMateria	&AMateria::operator=(AMateria const &other)
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &other)
{
	if (this != &other)
	{
		for (int i=0; i < 4; i++)
		{
			if (this->materia[i])
				delete (this->materia[i]);
			this->materia[i] = (other.materia[i])->clone();
		}
	}
	return (*this);
}

/******************** DESTRUCTORS ********************/

AMateria::~AMateria(void) {}

MateriaSource::~MateriaSource(void)
{
	for (int i=0; i < 4; i++)
		if (this->materia[i])
			delete (this->materia[i]);
}

/*********************** GETTER **********************/

std::string const	&AMateria::getType(void) const {return (this->_type);}

/********************** METHODS **********************/

void	AMateria::use(ICharacter &target) {(void)target; std::cout << "This is not a materia..." << std::endl;}

void	MateriaSource::learnMateria(AMateria *m)
{
	int	i;

	i = 0;
	while (i < 4 && this->materia[i])
		i++;
	if (i < 4)
		this->materia[i] = m;
}
AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	i;

	i = 3;
	while (i >= 0)
	{
		if (this->materia[i] && this->materia[i]->getType() == type)
			return (this->materia[i]->clone());
		i--;
	}
	return (NULL);
}