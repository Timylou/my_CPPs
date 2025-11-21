/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:50:26 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/20 17:50:27 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/************* CONSTRUCTORS *************/

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::HumanB()
{
	this->name = "nobody";
	this->weapon = NULL;
}

/**************** SETTER ***************/

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

/**************** ATTACK ***************/

void	HumanB::attack(void) const
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their fists" << std::endl;
}