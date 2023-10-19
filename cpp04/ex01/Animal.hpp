/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:14:41 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/18 23:04:04 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(std::string type);
	virtual ~Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);

	std::string		getType() const;
	void			setType(const std::string newType);
	virtual void	makeSound() const;
};

#endif
