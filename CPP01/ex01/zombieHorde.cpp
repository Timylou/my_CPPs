/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:35:08 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/20 13:35:10 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie	*horde;
	
	if (n < 0)
		return (NULL);
	horde = new Zombie[n];
	while (n > 0)
		horde[--n].setName(name);
	return (horde);
}