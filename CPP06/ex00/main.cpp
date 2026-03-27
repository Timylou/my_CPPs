/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <yel-mens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:14:43 by yel-mens          #+#    #+#             */
/*   Updated: 2026/03/27 11:25:43 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (EXIT_FAILURE);
	ScalarConverter::convert(argv[1]);
}