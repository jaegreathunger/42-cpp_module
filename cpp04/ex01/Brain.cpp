/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:21:53 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/18 22:26:45 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain has been created." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain has been destroyed." << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain has been created." << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}
