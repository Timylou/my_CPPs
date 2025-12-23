/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:45:25 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/20 17:45:28 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	private	:
		std::string	name;
		Weapon		&weapon;

		HumanA(void);

	public	:
		HumanA(std::string name, Weapon &weapon);
		HumanA(Weapon &weapon);

		void	attack(void) const;
};

#endif