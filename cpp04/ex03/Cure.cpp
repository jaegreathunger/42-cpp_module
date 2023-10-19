/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:06:34 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/19 22:17:40 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Materia has been created." << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Materia has been destroyed." << std::endl;
}

Cure::Cure(const Cure &other)
{
	*this = other;
	std::cout << "Cure Materia has been copied." << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	this->type = other.type;
	return *this;
}

AMateria *Cure::clone() const
{
	AMateria *cure = new Cure();
	return cure;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* heals "<< target.getName() << \
		"'s wounds *" << std::endl;
}
