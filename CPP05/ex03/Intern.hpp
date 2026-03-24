/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:16:01 by yel-mens          #+#    #+#             */
/*   Updated: 2026/03/24 15:30:30 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;
class AForm;

class Intern
{
	public:
		Intern(void);
		~Intern(void);

		AForm	*makeForm(std::string formName, std::string fromTarget);
		class FormNotFound : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif