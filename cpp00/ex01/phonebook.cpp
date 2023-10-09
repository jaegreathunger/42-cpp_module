/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:24:32 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/09 16:40:06 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

void	PhoneBook::add(void)
{
	this->contacts[index % 8].setContact(index % 8 + 1);
	if (index < 8)
		this->currentNbr++;
	this->index++;
}

void	printDivider(void)
{
	std::cout << "---------------------------------------------" << std::endl;
}

void	printFormatSearch(void)
{
	printDivider();
	std::cout << "|";
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First Name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nick Name";
	std::cout << "|";
	std::cout << std::endl;
}

void	PhoneBook::search(void)
{
	std::string			line;
	std::stringstream	ss;
	int					ssi;
	int					maxSearch;

	if (this->index == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return ;
	}
	printFormatSearch();
	for (int i = 0; i < this->currentNbr; i++)
	{
		printDivider();
		this->contacts[i].displayBrief();
		std::cout << std::endl;
		maxSearch = i + 1;
	}
	printDivider();
	std::cout << "Enter the index for full info: ";
	getline(std::cin, line);
	ss << line;
	ss >> ssi;
	if (ssi > maxSearch || ssi < 1 || ssi > index + 1)
	{
		std::cout << "Wrong Index." << std::endl;
		std::cout << "Press enter to go back to main...";
		return ;
	}
	else
		this->contacts[ssi - 1].displayFull();
	std::cout << "Enter to back to main...";
}
