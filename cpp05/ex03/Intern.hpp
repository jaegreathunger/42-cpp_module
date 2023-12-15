#pragma once

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define Robotomy request 1

class Intern
{
	public:
		Intern();
		Intern(Intern const &obj);
		Intern &operator=(Intern const &rhs);
		~Intern();

		AForm *makeForm(std::string const &formName, std::string const &target);

		class InvalidFormName: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "A poor intern can not handle this!";
				}
		};
};
