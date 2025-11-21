/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:42:52 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/20 10:46:27 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	private	:
		std::string	name;

	public	:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		void	announce(void) const;
		void	setName(std::string name);
};	

Zombie	*zombieHorde(int n, std::string name);

#endif
