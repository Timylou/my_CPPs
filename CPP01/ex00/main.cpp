/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:08:23 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/20 12:08:24 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*cyprien = newZombie("Cyprien");

	cyprien->announce();
	randomChump("Squeezie");
	delete cyprien;
}