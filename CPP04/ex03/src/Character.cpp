/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:11:59 by yel-mens          #+#    #+#             */
/*   Updated: 2026/01/19 16:12:00 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Materia.hpp"

/******************* CONSTRUCTORS ********************/

Character::Character(void)	:	_name("Nameless")
{
	for (int i=0; i < 4; i++)
		this->materia[i] = NULL;
}

Character::Character(Character const &other)	:	_name(other.getName())
{
	for (int i=0; i < 4; i++)
		this->materia[i] = (other.materia[i])->clone();
}

Character::Character(std::string const &name)	:	_name(name)
{
	for (int i=0; i < 4; i++)
		this->materia[i] = NULL;
}

/******************** OPERATOR *********************/

Character	&Character::operator=(Character const &other)
{
	if (this != &other)
	{
		this->_name = other.getName();
		for (int i=0; i < 4; i++)
		{
			if (this->materia[i])
				delete (this->materia[i]);
			this->materia[i] = (other.materia[i])->clone();
		}
	}
	return (*this);
}

/******************* DESTRUCTOR ********************/

Character::~Character(void)
{
	for (int i=0; i < 4; i++)
		if (this->materia[i])
			delete (this->materia[i]);
}

/********************* GETTER **********************/

std::string const	&Character::getName(void) const	{return (this->_name);}

/******************* CHARACTER *********************/

void	Character::equip(AMateria *m)
{
	int	i;

	i = 0;
	while (i < 4 && this->materia[i])
		i++;
	if (i < 4)
		this->materia[i] = m;
}

void	Character::unequip(int idx)
{
	if (3 < idx || idx < 0)
		return ;
	this->materia[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (3 < idx || idx < 0)
		return ;
	if (this->materia[idx])
		this->materia[idx]->use(target);
}
