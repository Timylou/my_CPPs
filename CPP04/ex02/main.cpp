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
	const Animal	*animals[100];

	for (int i = 0; i < 50; i++)
		animals[i] = new Dog();
	for (int i = 50; i < 100; i++)
		animals[i] = new Cat();

	for (int i = 0; i < 100; i++)
		animals[i]->makeSound();
	for (int i = 0; i < 100; i++)
		delete (animals[i]);
}