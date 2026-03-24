/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:02:26 by yel-mens          #+#    #+#             */
/*   Updated: 2026/03/24 14:51:34 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/******************* CONSTRUCTORS ********************/

PresidentialPardonForm::PresidentialPardonForm(void)
	: AForm("Nameless", 25, 5), _target("Nameless") {}

PresidentialPardonForm::PresidentialPardonForm(const ppf &other)
	: AForm(other.getName(), 25, 5), _target(other.getTarget()) {}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target)
	: AForm(name, 25, 5), _target(target) {}

/********************* OPERATORS ********************/

ppf	&PresidentialPardonForm::operator=(const ppf &other)
{
	if (this != &other)
		this->_target = other.getTarget();
	return (*this);
}

/******************* DESTRUCTROR ********************/

PresidentialPardonForm::~PresidentialPardonForm(void) {}

/********************* GETTER ***********************/

std::string	PresidentialPardonForm::getTarget(void) const {return (_target);}

/********************* EXECUTE **********************/

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGradeToExec())
		throw (AForm::GradeTooLowException());
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}