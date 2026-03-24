/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:47:26 by yel-mens          #+#    #+#             */
/*   Updated: 2026/03/24 14:52:10 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat BurA("Xavier Niel", 1);
	try
	{
		ShrubberyCreationForm formA("Berry", "miaou");
		
		std::cout << formA << std::endl;
		BurA.signForm(formA);
		std::cout << formA << std::endl << std::endl;
		BurA.executeForm(formA);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "====================" << std::endl;
	try
	{
		RobotomyRequestForm	formB("Robot", "Ferrari pista");

		std::cout << formB << std::endl;
		BurA.signForm(formB);
		std::cout << formB << std::endl << std::endl;
		BurA.executeForm(formB);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================" << std::endl;
	try
	{
		PresidentialPardonForm	formC("Trump", "Donald");

		std::cout << formC << std::endl;
		BurA.signForm(formC);
		std::cout << formC << std::endl;
		BurA.executeForm(formC);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}