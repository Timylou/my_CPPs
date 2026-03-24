/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:47:26 by yel-mens          #+#    #+#             */
/*   Updated: 2026/03/24 09:46:06 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat BurA("Squeezie", 124);
		Form FormA("miaou A", 124, 125);
		std::cout << FormA << std::endl;
		std::cout << BurA << std::endl << std::endl;
		BurA.signForm(FormA);
		std::cout << FormA << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "============" << std::endl;

	try
	{
		Bureaucrat BurB("Cyprien", 124);
		Form FormB("miaou B", 150,  123);
		std::cout << BurB << std::endl;
		std::cout << FormB << std::endl << std::endl;
		BurB.signForm(FormB);
		std::cout << FormB << std::endl;
		BurB.signForm(FormB);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "============" << std::endl;
}