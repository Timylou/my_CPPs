/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:36:47 by yel-mens          #+#    #+#             */
/*   Updated: 2025/12/03 16:36:47 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/********************* CONSTRUCTORS ***********************/

DiamondTrap::DiamondTrap(void)	:	ClapTrap("Nameless_clap_name"), _name("Nameless")
{
	std::cout << "Turns out he is actually a DiamondTrap !!!" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_initialHitPoints = this->_hitPoints;
}

DiamondTrap::DiamondTrap(const std::string &name)	:	ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "Turns out he is actually a DiamondTrap !!!" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_initialHitPoints = this->_hitPoints;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)	:	ClapTrap(other._name + "_clap_name"), _name(other._name)
{
	std::cout << "Turns out he is actually a DiamondTrap !!!" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_initialHitPoints = this->_hitPoints;
}

/*********************** OPERATOR *************************/

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
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

DiamondTrap::~DiamondTrap(void) {std::cout << this->_name << " packed his bagages and got away from the arena !" << std::endl;}

/********************* DIAMONDMOOVE ***********************/

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "LISTEN ARENA ! I AM " << this->_name << " AND MY CLAPTRAP NAME IS " << ClapTrap::_name << " ! REMEMBER ME FOOLS" << std::endl;
}