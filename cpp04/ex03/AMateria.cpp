/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:07:00 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/20 13:12:40 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("AMateria")
{
	std::cout << "AMateria has been created." << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria has been destroyed." << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "AMateria has been created." << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	this->type = other.type;
	std::cout << "AMateria has been copied." << std::endl;
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria use function to " << target.getName() << std::endl;
}
