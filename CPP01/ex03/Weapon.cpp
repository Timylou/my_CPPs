/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:45:16 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/20 17:45:17 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/************* CONSTRUCTOR *************/

Weapon::Weapon(void)
{
	this->type = "fists";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

/**************** GETTER **************/

std::string	&Weapon::getType(void)
{
	std::string	&typeREF = this->type;
	return (typeREF);
}

/**************** SETTER **************/

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}
