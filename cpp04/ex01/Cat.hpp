/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:30:44 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/18 23:04:00 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain *brain;

public:
	Cat();
	~Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);

	std::string	getType() const;
	void		setType(const std::string newType);
	void		makeSound() const;
};

#endif
