/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:18:36 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/05 21:33:36 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip> //setw()
#include <sstream> //stringstream, str()

class	Contact
{
	private:
		int			id;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		Contact();
		int		getId(void);
		void	setContact(int i);
		void	format(std::string str);
		void	displayBrief(void);
		void	displayFull(void);
};

#endif
