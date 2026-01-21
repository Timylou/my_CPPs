/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:32:08 by yel-mens          #+#    #+#             */
/*   Updated: 2026/01/08 19:32:09 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int	main(void)
{
	{
		const Animal	*Ayoub = new Dog();
		const Animal	*Rafed = new Cat();
		const Animal	Squeezie = Dog();

		std::cout << std::endl;
		Ayoub->makeSound();
		Rafed->makeSound();
		Squeezie.makeSound();
		std::cout << std::endl;

		delete Ayoub;
		delete Rafed;
	}
	std::cout << std::endl;
	{
		const WrongAnimal	*Wafed = new WrongCat();

		std::cout << std::endl;
		Wafed->makeSound();
		std::cout << std::endl;

		delete Wafed;
	}
}