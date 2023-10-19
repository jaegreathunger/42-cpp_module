/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:25:25 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/19 15:25:38 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(std::string type);
	virtual ~AAnimal();
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);

	std::string		getType() const;
	void			setType(const std::string newType);
	virtual void	makeSound() const = 0;
};

#endif
