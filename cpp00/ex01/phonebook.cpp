/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:24:32 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/05 23:25:03 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

void	PhoneBook::add(void)
{
	if (this->index == 8)
		this->index = 0;
	this->contacts[index].setContact(index + 1);
	this->index++;
}

void	PhoneBook::search(void)
{
	std::string			line;
	std::stringstream	ss;
	int					ssi;

	if (this->index == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return ;
	}
	std::cout << std::endl << "-JAE'S PHONEBOOK-" << std::endl;
	for (int i = 0; i < index; i++)
	{
		std::cout << "----------------------------------" << std::endl;
		this->contacts[i].displayBrief();
		std::cout << std::endl;
	}
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Enter the index for full info: ";
	getline(std::cin, line);
	ss << line;
	ss >> ssi;
	if (ssi < 1 || ssi > 9 || ssi > index + 1)
	{
		std::cout << "Wrong Index." << std::endl;
		std::cout << "Press enter to go back to main...";
		return ;
	}
	else
		this->contacts[ssi - 1].displayFull();
	std::cout << "Enter to back to main...";
}
