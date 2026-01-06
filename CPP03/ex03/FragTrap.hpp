/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:19:38 by yel-mens          #+#    #+#             */
/*   Updated: 2025/12/03 14:19:38 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include <iostream>

class FragTrap	:	virtual public ClapTrap
{
	public	:
		FragTrap(void);
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &other);
		FragTrap	&operator=(const FragTrap &other);
		~FragTrap(void);

		void	highFivesGuys(void);
};

#endif