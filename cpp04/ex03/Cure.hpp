/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:06:30 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/19 23:08:12 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
private:
	Cure();
	~Cure();
	Cure(const Cure &other);
	Cure &operator=(const Cure &other);

	AMateria	*clone() const;
	void		use(ICharacter &target);
};

#endif
