/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrabeari <rrabeari@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 06:54:58 by rrabeari          #+#    #+#             */
/*   Updated: 2025/01/18 08:59:56 by rrabeari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

void	table_format(std::string str)
{
	std::string temp;

	if (str.length() <= 10)
		std::cout << std::setw(10) << str;
	else
	{
		for (int i = 0; i != 9; ++i)
			std::cout << str[i];
		std::cout << ".";
	}
	std::cout << "|";
}

void	initialise_tab_contact(Contact *tab)
{
	for (int i = 0; i < 8; i++)
	{
		tab[i] = Contact();
	}
}

PhoneBook::PhoneBook()
{
	this->nbr = 0;
	this->lst = 0;
	initialise_tab_contact(this->repository);
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add(Contact pers)
{
	this->repository[this->lst++] = pers;
	this->lst %= 8;
	if (nbr < 8)
		this->nbr++;
}

int	PhoneBook::getNbr()
{
	return (nbr);
}

void	PhoneBook::details(int id)
{
	Contact 	pers;
	std::string	tmp;

	if (id > nbr && id <= 8)
		std::cout << "The number of Contact inside the repository is " << this->nbr << std::endl;
	else if (id <= nbr && id > 0)
	{
		std::cout << "First Name : " << this->repository[id - 1].getFirstName() << std::endl;
		std::cout << "Last Name : " << this->repository[id - 1].getLastName() << std::endl;
		std::cout << "Nick Name : " << this->repository[id - 1].getNickName() << std::endl;
		std::cout << "Phone Number : " << this->repository[id - 1].getPhoneNum() << std::endl;
		std::cout << "Darkest Secret : " << this->repository[id - 1].getDarkSecret() << std::endl;
	}
	else
		std::cout << "ID must be included inside the range 1 - 8" << std::endl;
}

void	PhoneBook::show(int id) const
{
	Contact 	pers;
	std::string	tmp;

	pers = this->repository[id];
	std::cout << std::setfill(' ') << std::setw(11) << id + 1 << "|";
	tmp = pers.getFirstName();
	table_format(tmp);
	tmp = pers.getLastName();
	table_format(tmp);
	tmp = pers.getNickName();
	table_format(tmp);
	std::cout << std::endl;
}
