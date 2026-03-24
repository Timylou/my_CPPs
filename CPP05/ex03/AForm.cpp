/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 14:34:03 by yel-mens          #+#    #+#             */
/*   Updated: 2026/03/24 09:45:26 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/******************* CONSTRUCTORS ********************/

AForm::AForm(void)	:	_name("Nameless"), _gradeToSign(100), _gradeToExec(100), _isSigned(false) {}

AForm::AForm(std::string name, int gradeToSign, int gradeToExec)	:	_name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _isSigned(false)
{
	if (gradeToExec < 1 || gradeToExec < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &other)	:	_name(other.getName()), _gradeToSign(other.getGradeToSign()), _gradeToExec(other.getGradeToExec()), _isSigned(false) {}

/********************* OPERATORS ********************/

AForm	&AForm::operator=(const AForm &other)
{
	if (this != &other)
		this->_isSigned = other.isSigned();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const AForm &rSym)
{
	os  << rSym.getName()
		<< " form need " << rSym.getGradeToSign() << " grade to be signed"
		<< " and " << rSym.getGradeToExec() << " to be executate. ";
	if (rSym.isSigned())
		os << "the form is currently signed";
	else
		os << "the form is currently not signed";
	return (os);
}

/******************* DESTRUCTROR ********************/

AForm::~AForm(void) {}

/********************* GETTERS **********************/

std::string	AForm::getName(void) const			{return (_name);}
int			AForm::getGradeToSign(void) const	{return (_gradeToSign);}
int			AForm::getGradeToExec(void) const	{return (_gradeToExec);}
bool		AForm::isSigned(void) const			{return (_isSigned);}

/********************* beSigned **********************/

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->isSigned())
		return ;
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw (AForm::GradeTooLowException());
	else
		this->_isSigned = true;
}

const char *	AForm::GradeTooHighException::what() const throw() {return ("A Form can't have a grade greater than 1.");}

const char *	AForm::GradeTooLowException::what() const throw() {return ("A Form can't have a grade lower than 150.");}