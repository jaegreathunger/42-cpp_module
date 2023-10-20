/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:36:44 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/20 13:08:55 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Materia has been created." << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Materia has been destroyed." << std::endl;
}

Ice::Ice(const Ice &other)
{
	*this = other;
	std::cout << "Ice Materia has been copied." << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
	this->type = other.type;
	return *this;
}

AMateria *Ice::clone() const
{
	AMateria *ice = new Ice();
	return ice;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " \
		<< target.getName() << " *" << std::endl;
}
