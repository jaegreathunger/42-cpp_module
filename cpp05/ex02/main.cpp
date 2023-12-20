/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:48:52 by jaeshin           #+#    #+#             */
/*   Updated: 2023/12/20 13:56:39 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat person = Bureaucrat("Jaejun", 1);
		std::cout << person;
		std::cout << std::endl;

		ShrubberyCreationForm sForm = ShrubberyCreationForm("ft");
		std::cout << sForm;
		person.signForm(sForm);
		person.executeForm(sForm);
		std::cout << std::endl;

		RobotomyRequestForm rForm = RobotomyRequestForm("robot");
		std::cout << rForm;
		person.signForm(rForm);
		person.executeForm(rForm);
		std::cout << std::endl;

		PresidentialPardonForm pForm = PresidentialPardonForm("president");
		std::cout << pForm;
		person.signForm(pForm);
		person.executeForm(pForm);
	}
	catch (std::exception const &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}
