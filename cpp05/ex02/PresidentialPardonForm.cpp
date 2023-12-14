#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) \
	: AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) \
	: AForm("PresidentialPardonForm", 25, 5), _target(obj._target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	(void)rhs;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw NotSignedForm();
	else if (this->getGradeExe() > executor.getGrade())
		throw GradeTooLowException();
	else
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}

