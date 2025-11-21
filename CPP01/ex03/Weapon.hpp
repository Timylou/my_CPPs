/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:35:33 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/20 17:35:34 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	private	:
		std::string	type;

	public	:
		Weapon(void);
		Weapon(std::string type);

		std::string	&getType(void);
		void		setType(std::string newType);

};

#endif
