/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:19:53 by yel-mens          #+#    #+#             */
/*   Updated: 2025/12/23 13:19:58 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

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
