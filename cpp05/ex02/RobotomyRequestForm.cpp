#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) \
	: AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) \
	: AForm("RobotomyRequestForm", 72, 45), _target(obj._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	(void)rhs;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw NotSignedForm();
	else if (this->getGradeExe() < executor.getGrade())
		throw GradeTooLowException();
	else
	{
		std::srand(static_cast<unsigned int>(std::time(nullptr)));

		if (std::rand() % 2)
			std::cout << "Buzzzzzzzzz... Robotomy Succeeded!" << std::endl;
		else
			std::cout << "Robotomy failed!" << std::endl;
	}
}

