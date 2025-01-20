/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrabeari <rrabeari@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 06:30:43 by rrabeari          #+#    #+#             */
/*   Updated: 2025/01/18 08:28:26 by rrabeari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include <iostream>
# include <iomanip>

class PhoneBook
{
	private:
		Contact	repository[8];
		int		lst;
		int		nbr;

	public:
		PhoneBook();
		~PhoneBook();
		void	add(Contact pers);
		void	show(int id) const;
		int		getNbr();
		void	details(int id);
};


#endif
