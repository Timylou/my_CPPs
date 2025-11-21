/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:53:00 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/20 10:53:01 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*************** CONSTRUCTOR **************/

Zombie::Zombie(void)
{
	this->name = "Squeezie";
	std::cout << "A zombie named " << this->name << " is born" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "A zombie named " << this->name << " is born" << std::endl;
}

/*************** DESTRUCTOR **************/

Zombie::~Zombie(void)
{
	std::cout << this->name << " Died..." << std::endl;

}

/*************** ANNOUNCE ****************/

void	Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
