/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:48:28 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/24 15:48:29 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/****************** CONSTRUCTOR **********************/

Harl::Harl(void) {}

/******************* COMPLAINS ***********************/

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Uninstall Lol it's not good for your mental health" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I lost 5 years of my life playing this game and i lost my family to grind the master rank" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "If you don't drop this game i'll destroy your computer" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "*throw the computer out the window* I do this for you son ... you'll thank me later" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING" , "ERROR"};
	int			i;

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			break ;
		i++;
	}
	if (i == 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
	}
}