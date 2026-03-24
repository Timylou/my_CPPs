/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:20:46 by yel-mens          #+#    #+#             */
/*   Updated: 2026/03/24 15:38:15 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}
Intern::~Intern(void) {}

AForm	*Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string names[3] = {"presidential pardon", "robotomy request",
							"shrubbery creation"};
	int number = 0;
	while (number <= 3)
	{
		if (names[number] == formName)
			break;
		number++;
	}
	switch (number)
	{
		case 0:
			return (new PresidentialPardonForm(formName, formTarget));
		case 1:
			return (new RobotomyRequestForm(formName, formTarget));
		case 2:
			return (new ShrubberyCreationForm(formName, formTarget));
		default:
			throw Intern::FormNotFound();
	}
}

const char	*Intern::FormNotFound::what() const throw() {return "This form does not exist";}