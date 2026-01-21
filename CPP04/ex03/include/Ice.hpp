/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:35:09 by yel-mens          #+#    #+#             */
/*   Updated: 2026/01/19 20:35:11 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "Materia.hpp"

class Ice	:	public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &other);
		Ice	&operator=(Ice const &other);
		~Ice(void);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
