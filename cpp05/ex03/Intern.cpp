#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &obj)
{
	*this = obj;
}

Intern &Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
}

Intern::~Intern() {}

AForm *Intern::makeForm(std::string const &formName, std::string const &target)
{
	char c = formName[0];
	switch (std::tolower(c))
	{
		case 's':
		{
			std::cout << "Intern creates Shrubbery Creation Form." << std::endl;
			return new ShrubberyCreationForm(target);
		}
		case 'r':
		{
			std::cout << "Intern creates Robotomy Request Form." << std::endl;
			return new RobotomyRequestForm(target);
		}
		case 'p':
		{
			std::cout << "Intern creates Presidential Pardon Form." << std::endl;
			return new PresidentialPardonForm(target);
		}
		default:
			throw InvalidFormName();
	}
	return NULL;
}
