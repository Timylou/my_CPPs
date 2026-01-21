/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:35:09 by yel-mens          #+#    #+#             */
/*   Updated: 2026/01/19 20:35:11 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "Materia.hpp"

class Cure	:	public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &other);
		Cure	&operator=(Cure const &other);
		~Cure(void);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif