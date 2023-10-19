/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:42:25 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/18 23:05:12 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain *brain;

public:
	Dog();
	~Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);

	std::string	getType() const;
	void		setType(const std::string newType);
	void		makeSound() const;
};

#endif
