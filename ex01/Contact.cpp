/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrabeari <rrabeari@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 07:59:33 by rrabeari          #+#    #+#             */
/*   Updated: 2025/01/15 14:24:22 by rrabeari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Contact.hpp"

bool	is_phone_format(std::string arg)
{
	const int length = arg.length() + 1;
	char c_arg[length];
	int	i = 0;

	std::strcpy(c_arg, arg.c_str());
	if (c_arg[i] == '+')
		i++;
	while (c_arg[i])
	{
		if (c_arg[i] <= '9' && c_arg[i] >= '0')
			i++;
		else
			return (0);
	}
	return (1);
}

Contact::Contact(std::string firstN, std::string lastN, std::string nickN, std::string phoneN, std::string darkS)
{
	this->firstName = firstN;
	this->lastName = lastN;
	this->nickName = nickN;
	this->phoneNum = phoneN;
	this->darkSecret = darkS;
}

Contact::Contact() : firstName(""), lastName(""), nickName(""), phoneNum(""), darkSecret("")
{
}

Contact::~Contact()
{
}

void	Contact::setFirstName(std::string arg)
{
	this->firstName = arg;
}

void	Contact::setLastName(std::string arg)
{
	this->lastName = arg;
}

void	Contact::setNickName(std::string arg)
{
	this->nickName = arg;
}

void	Contact::setPhoneNum(std::string arg)
{
	bool	valide(false);

	do
	{
		if (is_phone_format(arg))
			valide = true;
		else
		{
			std::cout << "Invalide Phone format" << std::endl;
			arg = prompt("Enter your Phone Number : ");
		}
	} while (!valide);
	this->phoneNum = arg;
}

void	Contact::setDarkSecret(std::string arg)
{
	this->darkSecret = arg;
}

std::string	Contact::getFirstName() const
{
	return (this->firstName);
}

std::string	Contact::getLastName() const
{
	return(this->lastName);
}

std::string	Contact::getPhoneNum() const
{
	return (this->phoneNum);
}

std::string	Contact::getNickName() const
{
	return (this->nickName);
}

std::string	Contact::getDarkSecret() const
{
	return (this->darkSecret);
}
