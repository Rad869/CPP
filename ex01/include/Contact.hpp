/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrabeari <rrabeari@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:37:39 by rrabeari          #+#    #+#             */
/*   Updated: 2025/01/15 14:21:32 by rrabeari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <string>
# include <cstring>
# include <iostream>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNum;
		std::string darkSecret;

	public:
		Contact();
		Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNum, std::string darkSecret);
		~Contact();
		void	setFirstName(std::string arg);
		void	setLastName(std::string arg);
		void	setNickName(std::string arg);
		void	setPhoneNum(std::string arg);
		void	setDarkSecret(std::string arg);
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getPhoneNum() const;
		std::string	getNickName() const;
		std::string	getDarkSecret() const;
};

std::string	prompt(std::string cmd);

#endif
