/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:38:45 by yel-mens          #+#    #+#             */
/*   Updated: 2025/12/03 13:38:46 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/********************* CONSTRUCTORS ***********************/

ScavTrap::ScavTrap(void)	:	ClapTrap()
{
	std::cout << "Turns out he is actually a ScavTrap !!!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_initialHitPoints = 100;
}

ScavTrap::ScavTrap(const std::string &name)	:	ClapTrap(name)
{
	std::cout << "Turns out he is actually a ScavTrap !!!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_initialHitPoints = 100;
}

ScavTrap::ScavTrap(const ScavTrap &other)	:	ClapTrap(other._name)
{
	std::cout << "Turns out he is actually a ScavTrap !!!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_initialHitPoints = 100;
}

/*********************** OPERATOR *************************/

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
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

ScavTrap::~ScavTrap(void) {std::cout << this->_name << " left the arena !" << std::endl;}

/*********************** SCAVMOOVE ************************/

void	ScavTrap::attack(const std::string &target)
{
	if (!this->_hitPoints)
		std::cout << "Even almost dead " << this->_name << " try to fight but has no more the strengh to keep going" << std::endl;
	if (this->_name == target)
	{
		std::cout << this->_name << " has lost his mind and try to hurt himself and ... ";
		if (this->_energyPoints > 0 && (int)(this->_hitPoints - this->_attackDamage) < 0)
			std::cout << "slay his throat and bled to death" << std::endl;
		else if (this->_energyPoints > 0)
			std::cout << "stab his left foot, he cannot move as he wich now. What an idiot !" << std::endl;
		else
			std::cout << "fall off the ground, he tried to catch his breath after this long battle" << std::endl;
	}
	else
	{
		std::cout << this->_name << " run in direction of " << target << " trying to attack and ... ";
		if (this->_energyPoints)
			std::cout << "reach his target" << std::endl;
		else
			std::cout << "miss his target" << std::endl;
	}
	if (this->_energyPoints)
			this->_energyPoints--;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " found a shield and rise it ! He is now in Gate keeper mode" << std::endl;
}