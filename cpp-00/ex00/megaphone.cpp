/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:49:59 by mbrousse          #+#    #+#             */
/*   Updated: 2024/08/15 12:02:50 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		++av;
		while (*av)
		{
			std::string str(*av);
			for (std::size_t i = 0 ; i < str.length(); i++)
				str[i] = toupper(str[i]);
			std::cout << str;
			av++;
		}
		std::cout << std::endl;
	}
}