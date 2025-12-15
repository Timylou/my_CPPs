/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:10:25 by yel-mens          #+#    #+#             */
/*   Updated: 2025/12/02 18:10:27 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	Garen("Garen");
	ClapTrap	Darius("Darius");
	ScavTrap	Nameless;

	std::cout << std::endl;
	Garen.attack("Darius");
	Darius.takeDamage(0);
	std::cout << std::endl;
	Nameless.attack("Darius");
	Darius.takeDamage(20);
	std::cout << std::endl;
	Darius.attack("Nameless");
	Nameless.takeDamage(0);
	std::cout << std::endl;
	Nameless.guardGate();
	std::cout << std::endl;
	Darius.attack("Nameless");
	Nameless.takeDamage(0);
	std::cout << std::endl;
}
