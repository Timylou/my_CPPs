/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 10:51:30 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/18 15:47:27 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cstdlib>
#include <iomanip>

Contact::Contact(void)
{
	firstname[0] = 0;
	lastname[0] = 0;
	nickname[0] = 0;
	phonenumber[0] = 0;
	secret[0] = 0;
	index = -1;
}

void	Contact::setArray(char array[11], const char *name)
{
	std::string	line;
	unsigned int	i;

	i = 1;
	while (i)
	{
		std::cout << name << " : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			std::exit(0);
		else if (line.size() == 0)
			std::cout << "A saved contact can't have empty fields" << std::endl;
		else
			i = 0;
	}
	while (line[i] && i < 10)
	{
		array[i] = line[i];
		i++;
	}
	if (i == 10)
		array[9] = '.';
	array[i] = 0;
}

void	Contact::newContact(int index)
{
	setArray(firstname, "first name");
	setArray(lastname, "last name");
	setArray(nickname, "nickname");
	setArray(phonenumber, "phone number");
	setArray(secret, "darkest secret");
	this->index = index;
}

void	Contact::printSummary(void)
{
	if (this->index < 0)
		return ;
	std::cout << "|" << std::setw(10) << index
			  << "|" << std::setw(10) << this->firstname
			  << "|" << std::setw(10) << this->lastname
			  << "|" << std::setw(10) << this->nickname
			  << "|" << std::endl;
}

void	Contact::print(void)
{
	if (this->index < 0)
		return ;
	std::cout << "first name : " << firstname << std::endl;
	std::cout << "last name : " << lastname << std::endl;
	std::cout << "nickname : " << nickname << std::endl;
	std::cout << "phone number : " << phonenumber << std::endl;
	std::cout << "darkest secret : " << secret << std::endl;
}
