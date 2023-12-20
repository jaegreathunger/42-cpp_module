/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:48:52 by jaeshin           #+#    #+#             */
/*   Updated: 2023/12/20 14:00:40 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat person = Bureaucrat("Jaejun", 1);
		Intern intern = Intern();
		std::cout << person;
		std::cout << std::endl;

		AForm *form = intern.makeForm("ShrubberyCreation", "42_adelaide");
		//AForm *form = intern.makeForm("PresidentialPardon", "42_adelaide");
		//AForm *form = intern.makeForm("RobotomyRequest", "42_adelaide");
		std::cout << *form;
		std::cout << std::endl;

		person.signForm(*form);
		person.executeForm(*form);
		std::cout << std::endl;
		delete form;
	}
	catch (std::exception const &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}
