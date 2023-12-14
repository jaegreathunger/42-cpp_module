#pragma once

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string const _target;

		PresidentialPardonForm();

	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &obj);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm();

		void execute(Bureaucrat const &executor) const;
};
