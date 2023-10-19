/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:19:14 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/19 23:08:05 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
private:
	Ice();
	~Ice();
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);

	AMateria	*clone() const;
	void		use(ICharacter &target);
};

#endif
