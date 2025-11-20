/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 10:50:50 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/18 15:18:02 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->index = 0;
}

void	Phonebook::add(void)
{
	std::cout << "ADD A NEW CONTACT" << std::endl;
	contacts[0].newContact(index);
	std::cout << "NEW CONTACT ADDED WITH SUCCESS" << std::endl;
	index = (index + 1) % 8;
}

static int	ft_atoi(char c)
{
	return (c - '0');
}

void	Phonebook::search(void)
{
	std::string	input;

	std::cout << "WHAT IS THE INDEX OF THE CONTACT ?" << std::endl;
	while (1)
	{
		std::cout << "index : ";
		std::getline(std::cin, input);
		if (input.size() != 1 || !('0' <= input[0] && input[0] <= '7'))
			std::cout << "The index must be between 0 and 7" << std::endl;
		else
			break;
	}
	contacts[ft_atoi(input[0])].print();
}
