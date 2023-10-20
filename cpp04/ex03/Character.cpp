/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:31:42 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/20 15:34:39 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Unknown")
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << this->name << " has been created." << std::endl;
}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << this->name << " has been created." << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
	std::cout << this->name << " has been destroyed." << std::endl;
}

Character::Character(const Character &other)
{
	*this = other;
	std::cout << this->name << " has been copied." << std::endl;
}

Character &Character::operator=(const Character &other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = other.inventory[i];
	return *this;
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << this->name << " has equiped with " \
				<< m->getType() << "." << std::endl;
			return ;
		}
	}
	std::cout << this->name << " has the inventory full." << std::endl;
}

void Character::unequip(int idx)
{
	if (this->inventory[idx])
	{
		delete this->inventory[idx];
		this->inventory[idx] = NULL;
		std::cout << this->name << " has unequiped."<< std::endl;
	}
	else
		std::cout << this->name << " has failed to unequip."<< std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	this->inventory[idx]->use(target);
}
