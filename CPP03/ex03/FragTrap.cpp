/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:19:32 by yel-mens          #+#    #+#             */
/*   Updated: 2025/12/03 14:19:34 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/********************* CONSTRUCTORS ***********************/

FragTrap::FragTrap(void)	:	ClapTrap()
{
	std::cout << "Turns out he is actually a FragTrap !!!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_initialHitPoints = 100;
}

FragTrap::FragTrap(const std::string &name)	:	ClapTrap(name)
{
	std::cout << "Turns out he is actually a FragTrap !!!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_initialHitPoints = 100;
}

FragTrap::FragTrap(const FragTrap &other)	:	ClapTrap(other._name)
{
	std::cout << "Turns out he is actually a FragTrap !!!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_initialHitPoints = 100;
}

/*********************** OPERATOR *************************/

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

/********************** DESTRUCTOR ************************/

FragTrap::~FragTrap(void) {std::cout << this->_name << " quit the arena !" << std::endl;}

/*********************** FRAGMOOVE ************************/

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " rise in his fist to sky showing he is the best gladiator of the arena !!" << std::endl;
}