/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:07:53 by yel-mens          #+#    #+#             */
/*   Updated: 2026/03/24 14:48:48 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <ctime>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm;

typedef RobotomyRequestForm rrf;

class RobotomyRequestForm	:	public AForm
{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const rrf &other);
		RobotomyRequestForm(std::string name, std::string target);
		rrf &operator=(const rrf &other);
		~RobotomyRequestForm(void);

		std::string	getTarget(void) const;
		
		void execute(const Bureaucrat &other) const;
};

#endif