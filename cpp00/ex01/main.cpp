/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:18:24 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/09 16:32:46 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	PhoneBook phonebook;
	std::string	line;

	std::cout << std::setw(20) << "##########################" << std::endl;
	std::cout << std::setw(20) << "WELCOME TO JAE'S PHONEBOOK" << std::endl;
	std::cout << std::setw(20) << "THREE OPTIONS" << std::endl;
	std::cout << std::setw(20) << "ADD SEARCH EXIT" << std::endl;
	std::cout << std::setw(20) << "##########################" << std::endl;
	while (42)
	{
		getline(std::cin, line);
		if (line == "ADD")
			phonebook.add();
		else if (line == "SEARCH")
			phonebook.search();
		else if (line == "EXIT")
		{
			std::cout << std::setw(20) << "END OF PHONEBOOK" << std::endl;
			exit(0);
		}
		else
		{
			std::cout << std::endl << "THREE OPTIONS AVAILABLE" << std::endl;
			std::cout << std::setw(20) << "ADD SEARCH EXIT" << std::endl;
		}
	}
	return (0);
}
