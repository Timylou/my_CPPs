/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:01:50 by yel-mens          #+#    #+#             */
/*   Updated: 2025/12/02 18:01:52 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Garen("Garen");
	ClapTrap	Darius("Darius");
	ClapTrap	Nameless;

	std::cout << std::endl;
	Garen.attack("Darius");
	Darius.takeDamage(0);
	std::cout << std::endl;
	Nameless.attack("Darius");
	Darius.takeDamage(0);
	std::cout << std::endl;
}
