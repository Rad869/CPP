/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrabeari <rrabeari@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:32:28 by rrabeari          #+#    #+#             */
/*   Updated: 2025/01/20 07:04:20 by rrabeari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Contact.hpp"
#include "include/PhoneBook.hpp"
#include <iostream>
#include <limits>

std::string trim(const std::string & source) {
    std::string s(source);
    s.erase(0,s.find_first_not_of(" \n\r\t"));
    s.erase(s.find_last_not_of(" \n\r\t")+1);
    return s;
}

std::string	prompt(std::string cmd)
{
	std::string	value("");
	bool		valide_input(false);

	do
	{
		std::cout << cmd << std::endl;
		getline(std::cin, value);
		if(value.find_first_not_of(" \t\n\r") == std::string::npos && !value.empty())
			std::cout << "Must contain other than space or tab" << std::endl;
		else if (!value.empty())
			valide_input = true;
		else
			std::cout << "Cannot be empty!" << std::endl;
	} while (!valide_input);
	value = trim(value);
	return (value);
}

int	get_int(std::string cmd)
{
	int			return_val;
	bool		valide_input(false);

	do
	{
		std::cout << cmd << std::endl;
		if (std::cin >> return_val)
		{
			std::string value("");
			getline(std::cin, value);
			if (value.empty())
				valide_input = true;
			else
				std::cout << "Error, only a number." << std::endl;
		}
		else
		{
			std::cout << "Input error." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	} while (!valide_input);
	return (return_val);
}

void	add(PhoneBook &phoneBook)
{
	Contact contact;

	contact.setFirstName(prompt("Enter your First Name : "));
	contact.setLastName(prompt("Enter your Last Name : "));
	contact.setNickName(prompt("Enter your Nick Name : "));
	contact.setPhoneNum(prompt("Enter your Phone Number : "));
	contact.setDarkSecret(prompt("Enter your Darkest Secret : "));
	phoneBook.add(contact);
	std::cout << "<<<<<<<<<<<<<<<<<  CONTACT ADDED SUCCESSFULLY  >>>>>>>>>>>>>>>>>" << std::endl;
}

void	search(PhoneBook &phoneBook)
{
	int	id;

	id = 0;
	do
	{
		phoneBook.show(id++);
	} while (id < phoneBook.getNbr());

	id = get_int("Which ID would you search ? from 1 - 8");
	phoneBook.details(id);
}

int	main()
{
	PhoneBook	phoneBook;
	bool		run(true);

	do
	{
		std::string input(prompt("What do you want to do? (ADD - SEARCH - EXIT)"));
		if (!input.compare("ADD"))
			add(phoneBook);
		else if (!input.compare("SEARCH"))
			search(phoneBook);
		else if (!input.compare("EXIT"))
		{
			std::cout << "Bye!!" << std::endl;
			run = false;
		}
	} while (run);
}
