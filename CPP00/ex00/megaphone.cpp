/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrabeari <rrabeari@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 07:31:57 by rrabeari          #+#    #+#             */
/*   Updated: 2025/01/18 10:26:21 by rrabeari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	toUpper(std::string str)
{
	int	length;

	length = str.length();
	for (int i=0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		if (argc == 2){
			std::string arg(argv[1]);
			if (arg.empty() || arg.find_first_not_of(" \t\n\r") == std::string::npos)
			{
				std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
				return 0;
			}
		}
		for (int i = 1; i < argc; i++)
		{
			std::string value(argv[i]);
			std::cout << toUpper(argv[i]);
		}
		std::cout << std::endl;
	}
	return (0);
}
