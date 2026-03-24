/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:07:53 by yel-mens          #+#    #+#             */
/*   Updated: 2026/03/24 14:48:48 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm;

typedef ShrubberyCreationForm scf;

class ShrubberyCreationForm	:	public AForm
{
	private:
		std::string	_target;
		
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const scf &other);
		ShrubberyCreationForm(std::string name, std::string target);
		scf &operator=(const scf &other);
		~ShrubberyCreationForm(void);

		std::string	getTarget(void) const;
		
		void execute(const Bureaucrat &executor) const;
};

#endif