/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:11:37 by yel-mens          #+#    #+#             */
/*   Updated: 2025/11/21 11:11:38 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string	ft_replace(std::string content, const std::string &s1, const std::string &s2)
{
	std::string	result;
	size_t		pos;
	size_t		found;

	if (s1.empty())
		return (content);
	pos = 0;
	found = content.find(s1, pos);
	while (found != std::string::npos)
	{
		result.append(content.substr(pos, found - pos));
		result.append(s2);
		pos = found + s1.size();
		found = content.find(s1, pos);
	}
	result.append(content.substr(pos));
	return (result);
}

int	main(int argc, char **argv)
{
	std::ifstream		infile;
	std::ofstream		outfile;
	std::stringstream	buffer;
	std::string			content;
	std::string			replace;
	
	if (argc != 4)
	{
		std::cout << "./replace filename s1 s2" << std::endl;
		infile.close();
		return (1);
	}
	infile.open(argv[1]);
	if (!infile)
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	buffer << infile.rdbuf();
	content = buffer.str();
	infile.close();
	replace = ft_replace(content, argv[2], argv[3]);
	outfile.open(std::string(argv[1]) + ".replace");
	outfile << replace;
	outfile.close();
	return (0);
}
