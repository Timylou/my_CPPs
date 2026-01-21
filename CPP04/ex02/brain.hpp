/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 22:35:53 by yel-mens          #+#    #+#             */
/*   Updated: 2026/01/11 22:35:53 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain(void);
		Brain(const Brain &other);
		Brain	&operator=(const Brain &other);
		~Brain(void);
};

#endif