/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:58:34 by yel-mens          #+#    #+#             */
/*   Updated: 2026/03/24 09:42:52 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/******************* CONSTRUCTORS ********************/

Bureaucrat::Bureaucrat(std::string name, int grade)	:	_name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(void)	:	_name("Nameless"), _grade(150) {}

Bureaucrat::Bureaucrat(Bureaucrat const &other)	:	_name(other.getName()), _grade(other.getGrade()) {}

/********************* OPERATORS ********************/
	
Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this != &other)
		this->_grade = other.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &rSym)
{
	os << rSym.getName() << ", bureaucrat grade " << rSym.getGrade();
	return (os);
}

/******************* DESTRUCTROR ********************/

Bureaucrat::~Bureaucrat(void)	{}

/********************* GETTERS **********************/

std::string	Bureaucrat::getName(void) const	{return (this->_name);}

int			Bureaucrat::getGrade(void) const {return (this->_grade);}

/******************* CREMENTATIONS ******************/

void	Bureaucrat::increment(void)
{
	if (this->getGrade() == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrement(void)
{
	if (this->getGrade() == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.isSigned())
	{
		std::cout << this->getName() << " couldn’t sign "
				  << form.getName() << " because it's already signed." << std::endl;
		return ;
	}
	form.beSigned(*this);
	if (form.getGradeToSign() < this->getGrade())
		std::cout << this->getName() << " couldn’t sign "
				  << form.getName() << " because grade is low." << std::endl;
	else
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
}

/******************** EXCEPTIONS ********************/

const char *	Bureaucrat::GradeTooHighException::what() const throw() {return ("A bureaucrat can't have a grade greater than 1.");}

const char *	Bureaucrat::GradeTooLowException::what() const throw() {return ("A bureaucrat can't have a grade lower than 150.");}