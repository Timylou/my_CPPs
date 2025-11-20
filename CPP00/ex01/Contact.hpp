/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 10:51:37 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/18 15:34:15 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
	private	:
		char	firstname[11];
		char	lastname[11];
		char	nickname[11];
		char	phonenumber[11];
		char	secret[11];
		int		index;

		void	setArray(char array[11], const char *name);

	public	:
		Contact(void);
		
		void	newContact(int index);
		void	print(void);
};

#endif
