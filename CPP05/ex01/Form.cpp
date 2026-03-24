/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 14:34:03 by yel-mens          #+#    #+#             */
/*   Updated: 2026/03/24 09:45:26 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/******************* CONSTRUCTORS ********************/

Form::Form(void)	:	_name("Nameless"), _gradeToSign(100), _gradeToExec(100), _isSigned(false) {}

Form::Form(std::string name, int gradeToSign, int gradeToExec)	:	_name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _isSigned(false)
{
	if (gradeToExec < 1 || gradeToExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other)	:	_name(other.getName()), _gradeToSign(other.getGradeToSign()), _gradeToExec(other.getGradeToExec()), _isSigned(false) {}

/********************* OPERATORS ********************/

Form	&Form::operator=(const Form &other)
{
	if (this != &other)
		this->_isSigned = other.isSigned();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Form &rSym)
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

Form::~Form(void) {}

/********************* GETTERS **********************/

std::string	Form::getName(void) const			{return (_name);}
int			Form::getGradeToSign(void) const	{return (_gradeToSign);}
int			Form::getGradeToExec(void) const	{return (_gradeToExec);}
bool		Form::isSigned(void) const			{return (_isSigned);}

/********************* beSigned **********************/

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->isSigned())
		return ;
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw (Form::GradeTooLowException());
	else
		this->_isSigned = true;
}

const char *	Form::GradeTooHighException::what() const throw() {return ("A Form can't have a grade greater than 1.");}

const char *	Form::GradeTooLowException::what() const throw() {return ("A Form can't have a grade lower than 150.");}