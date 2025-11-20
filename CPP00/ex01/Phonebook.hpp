/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 10:50:57 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/18 15:00:11 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class	Phonebook
{
	private	:
		Contact	contacts[8];
		int		index;

	public	:
		Phonebook(void);
		
		void	add(void);
		void	search(void);
};

#endif
