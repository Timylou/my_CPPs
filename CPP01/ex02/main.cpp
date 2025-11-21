/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 14:08:42 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/20 14:08:44 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "string address    : " << &str << std::endl
			  << "stringPTR address : " << stringPTR << std::endl
			  << "stringREF address : " << &stringREF << std::endl
			  << std::endl
			  << "string value    : " << str << std::endl
			  << "stringPTR value : " << *stringPTR << std::endl
			  << "stringREF value : " << stringREF << std::endl;
}
