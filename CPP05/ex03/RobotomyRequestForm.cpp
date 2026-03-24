/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 11:36:59 by yel-mens          #+#    #+#             */
/*   Updated: 2026/03/24 14:47:26 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/******************* CONSTRUCTORS ********************/

RobotomyRequestForm::RobotomyRequestForm(void)
	: AForm("Nameless", 72, 45), _target("Nameless") {}

RobotomyRequestForm::RobotomyRequestForm(const rrf &other)
	: AForm(other.getName(), 72, 45), _target(other.getTarget()) {}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target)
	: AForm(name, 72, 45), _target(target) {}

/********************* OPERATORS ********************/

rrf	&RobotomyRequestForm::operator=(const rrf &other)
{
	if (this != &other)
		this->_target = other.getTarget();
	return (*this);
}

/******************* DESTRUCTROR ********************/

RobotomyRequestForm::~RobotomyRequestForm(void) {}

/********************* GETTER ***********************/

std::string	RobotomyRequestForm::getTarget(void) const {return (_target);}

/********************* EXECUTE **********************/

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGradeToExec())
		throw (AForm::GradeTooLowException());
	std::cout << this->getTarget() << " start his motor" << std::endl;
	std::cout << "vrrRRrrRRRRrrrrRRrRrRRRRRR" << std::endl;

	std::srand(std::time(0));
	if (rand() % 2)
		std::cout << this->getTarget() << " has been sucessfly robotized!" << std::endl;
	else
		std::cout << this->getTarget() << " failed to robotized!" << std::endl;
}