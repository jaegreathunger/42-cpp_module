#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) \
	: AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) \
	: AForm("ShrubberyCreationForm", 145, 137), _target(obj._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	(void)rhs;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw NotSignedForm();
	else if (this->getGradeExe() < executor.getGrade())
		throw GradeTooLowException();
	else
	{
		std::ofstream file((_target + "_shrubbery"));
		if (file.is_open())
		{
			file << TREE << std::endl;
			file.close();
		}
		else
			std::cout << "Error: opening file." << std::endl;
	}
}
