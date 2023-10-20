/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:29:50 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/20 13:23:20 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
	std::cout << "MateriaSource has been created." << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->materias[i];
	std::cout << "MateriaSource has been destroyed." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
	std::cout << "MateriaSource has been copied." << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = other.materias[i];
	std::cout << "MateriaSource has been copied." << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] == NULL)
		{
			this->materias[i] = m;
			std::cout << "MateriaSource learned " << m->getType() << std::endl;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (materias[i] && materias[i]->getType() == type)
			return materias[i]->clone();
	return NULL;
}
