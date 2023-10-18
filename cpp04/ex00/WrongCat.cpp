/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:55:03 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/18 16:55:26 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//WrongCat::WrongCat() {};

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat has been created." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat has been destroyed." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->type = other.type;
	return *this;
}

std::string	WrongCat::getType() const
{
	return this->type;
}

void	WrongCat::setType(std::string newType)
{
	this->type = newType;
}

void	WrongCat::makeSound() const
{
	std::cout << "I am a WrongCat, WHOOF WHOOF." << std::endl;
}
