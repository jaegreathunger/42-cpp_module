/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:18:35 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/05 21:20:47 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
	this->id = 0;
}

void	Contact::setContact(int i)
{
	this->id = i;
	std::cout << "First Name: ";
	std::cin >> this->firstName;
	std::cout << "Last Name: ";
	std::cin >> this->lastName;
	std::cout << "Nick Name: ";
	std::cin >> this->nickName;
	std::cout << "Phone Number: ";
	std::cin >> this->phoneNumber;
	std::cout << "Darkest Secret: ";
	std::cin >> this->darkestSecret;
}

void	Contact::format(std::string str)
{
	if (str.length() > 10)
		std::cout << std::setw(9) << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void	Contact::displayBrief(void)
{
	std::stringstream	ss;
	ss << this->id;
	std::cout << "|";
	this->format(ss.str());
	std::cout << "|";
	this->format(this->firstName);
	std::cout << "|";
	this->format(this->lastName);
	std::cout << "|";
}

void	Contact::displayFull(void)
{
	std::cout << "First Name: " << this->firstName << std::endl;
	std::cout << "Last Name: " << this->lastName << std::endl;
	std::cout << "Nick Name: " << this->nickName << std::endl;
	std::cout << "Phone Number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;
}
