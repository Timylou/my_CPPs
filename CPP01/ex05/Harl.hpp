/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:48:22 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/24 15:48:23 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
	private	:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public	:
		Harl(void);

		void	complain(std::string level);
};

#endif