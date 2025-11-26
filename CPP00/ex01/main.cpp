/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 10:50:38 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/18 15:28:13 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <limits>

int	main(void)
{
	Phonebook	phonebook;
	std::string	input;

	std::cout << "Welcome to PHONEBOOK" << std::endl;
	std::cout << "The program only accepts ADD, SEARCH and EXIT" << std::endl;
	while (input != "EXIT")
	{
		std::cout << "input : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		else if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
	}
}
