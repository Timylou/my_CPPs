/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:51:51 by yel-mens          #+#    #+#             */
/*   Updated: 2025/12/01 14:51:51 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/********************* CONSTRUCTORS ***********************/

ClapTrap::ClapTrap(void)	:	_name("Nameless"), _hitPoints(10), _energyPoints(10), _attackDamage(0), _initialHitPoints(10)
			{std::cout << "A new ClapTrap join the arena !! Please greet proprely the brave " << this->_name << " !!" << std::endl;}

ClapTrap::ClapTrap(const std::string &name)	:	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0), _initialHitPoints(10)
			{std::cout << "A new ClapTrap join the arena !! Please greet proprely the brave " << this->_name << " !!" << std::endl;}

ClapTrap::ClapTrap(const ClapTrap &other)	:	_name(other._name), _hitPoints(10), _energyPoints(10), _attackDamage(0), _initialHitPoints(10)
			{std::cout << "A new ClapTrap join the arena !! Please greet proprely the brave " << this->_name << " !!" << std::endl;}

/*********************** OPERATOR *************************/

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
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

ClapTrap::~ClapTrap(void) {std::cout << this->_name << " left the arena !" << std::endl;}

/*********************** CLAPMOOVE ************************/

void	ClapTrap::attack(const std::string &target)
{
	if (!this->_hitPoints)
		std::cout << "The living corpse of " << this->_name << " lying in the ground tried to reach " << target << " without success" << std::endl;
	if (this->_name == target)
	{
		std::cout << this->_name << " is going insaaane, He tried to hurt himself and ... ";
		if (this->_energyPoints > 0 && (int)(this->_hitPoints - this->_attackDamage) <= 0)
			std::cout << "stabbed himself in the heart. That's what happens when you haven't the shoulder for the arena" << std::endl;
		else if (this->_energyPoints > 0)
			std::cout << "he cut off his finger. Is it a strategy to taunt his opponent or is he going crazy ?" << std::endl;
		else
			std::cout << "he has no stamina left. he collapse in the ground. He is now an easy target for the other" << std::endl;
	}
	else
	{
		
		std::cout << this->_name << " rush toward " << target << " trying to attack and ... ";
		if (this->_energyPoints)
			std::cout << "reach his target" << std::endl;
		else
			std::cout << "miss his target" << std::endl;
	}
	if (this->_energyPoints)
			this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hitPoints)
		std::cout << "Someone is punching " << this->_name << "'s corpse" << std::endl;
	else if (!amount)
		std::cout << "FIGHT HARDER WEAKLING DEALING 0 DAMAGE IS A SHAME FOR A GLADIATOR. IN THE ARENA IT'S KILL OR BE KILLED !" << std::endl;
	else if (this->_hitPoints > (unsigned int)(this->_initialHitPoints * 0.7) && (int)(this->_hitPoints - amount) <= 0)
		std::cout << "WOW !!! " << this->_name << " has been defeated by a single hit ! His opponent dealt " << amount << " of damage in a single attack" << std::endl;
	else if (this->_hitPoints > (unsigned int)(this->_initialHitPoints * 0.7))
		std::cout << "OUCH ! " << this->_name << " got hurt, he took " << amount << " of damage" << std::endl;
	else if (this->_hitPoints > (unsigned int)(this->_initialHitPoints / 2) && (int)(this->_hitPoints - amount) <= 0)
		std::cout << "After a short fight " << this->_name << " lost his left arm and " << amount << " of hit points, I think it's the end for him" << std::endl;
	else if (this->_hitPoints > (unsigned int)(this->_initialHitPoints / 2))
		std::cout << this->_name << " have to handle himself if he don't want to join kindred, he just lost " << amount << " of hit points" << std::endl;
	else if (this->_hitPoints > (unsigned int)(this->_initialHitPoints * 0.3) && (int)(this->_hitPoints - amount) <= 0)
		std::cout << "After a rude fight " << this->_name << " has been deafeted after taking " << amount << " damage" << std::endl;
	else if (this->_hitPoints > (unsigned int)(this->_initialHitPoints * 0.3))
		std::cout << "HEEEYYY LOOK !! " << this->_name << " took " << amount << " damage and kneel before his opponent but he is getting back on his feet for one last fight !!! THAT'S THE SPIRIT BOY" << std::endl;
	else if ((int)(this->_hitPoints - amount) <= 0)
		std::cout << this->_name << " collapse, his body cannot take it anymore. This last " << amount << " damage finished him" << std::endl;
	if ((int)(this->_hitPoints - amount) <= 0)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_hitPoints)
		std::cout << "The healthcare staff try to reanimate " << this->_name << " in vain." << std::endl;
	else if (!amount)
		std::cout << "LOOK AT " << this->_name << " !! HE TRY TO HEAL HIS WOUNDS WITH A TINY ROCK" << std::endl;
	else if (this->_hitPoints > this->_initialHitPoints)
		std::cout << this->_name << " is upgrading his armor winning " << amount << " hit points" << std::endl;
	else if (this->_hitPoints > (unsigned int)(this->_initialHitPoints * 0.7))
		std::cout << this->_name << " found a plaster and put it on his scratch, he gain " << amount << " hit points" << std::endl;
	else if (this->_hitPoints > (unsigned int)(this->_initialHitPoints / 2))
		std::cout << this->_name << " called the healthcare staff to give him a medkit for " << amount << " hit points" << std::endl;
	else if (this->_hitPoints > (unsigned int)(this->_initialHitPoints * 0.3))
		std::cout << "It's about time ! " << this->_name << " called a doctor to heal his injuries, the doctor got him " << amount << " hit points" << std::endl;
	else
		std::cout << "AMAZING !! " << this->_name << " crawl to the healthcare tent to treat his severe wounds. They did a spectacular job and gave him " << amount << " hit points more" << std::endl;
	if (this->_hitPoints)
		this->_hitPoints += amount;
	if (this->_energyPoints)
		this->_energyPoints--;
}