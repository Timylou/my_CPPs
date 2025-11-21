/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:45:25 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/20 17:45:28 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	private	:
		Weapon		*weapon;
		std::string	name;

	public	:
		HumanB(std::string name);
		HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon &weapon);
};

#endif