/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:07:53 by yel-mens          #+#    #+#             */
/*   Updated: 2026/03/24 14:45:45 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm;

typedef PresidentialPardonForm ppf;

class PresidentialPardonForm	:	public AForm
{
	private:
		std::string	_target;

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const ppf &other);
		PresidentialPardonForm(std::string name, std::string target);
		ppf &operator=(const ppf &other);
		~PresidentialPardonForm(void);

		std::string	getTarget(void) const;
		
		void execute(const Bureaucrat &other) const;
};

#endif