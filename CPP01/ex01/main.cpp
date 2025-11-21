/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:34:32 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/20 13:34:33 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		n;

	n = 12;
	horde = zombieHorde(n, "Squeezos");
	for (int i=0; i < n; i++)
		horde[i].announce();
	delete[] horde;
}
