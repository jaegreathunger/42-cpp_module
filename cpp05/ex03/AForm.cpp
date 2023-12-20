#include "AForm.hpp"

AForm::AForm(std::string const &name, int gradeSign, int gradeExe) \
	: _name(name), _gradeSign(gradeSign), _gradeExe(gradeExe) {}

AForm::AForm(AForm const &obj) \
	: _name(obj._name), _signed(obj._signed), _gradeSign(obj.getGradeSign()), _gradeExe(obj.getGradeExe()) {}

AForm &AForm::operator=(AForm const &rhs)
{
	if (this != &rhs)
		_signed = rhs.getSigned();
	return *this;
}

AForm::~AForm() {}

std::string AForm::getName() const
{
	return _name;
}

bool AForm::getSigned() const
{
	return _signed;
}

int AForm::getGradeSign() const
{
	return _gradeSign;
}

int AForm::getGradeExe() const
{
	return _gradeExe;
}

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (_gradeSign < bureaucrat.getGrade())
		throw GradeTooLowException();
	_signed = true;
}

std::ostream &operator<<(std::ostream &os, AForm const &AForm)
{
	os << "AForm's name: " << AForm.getName() << std::endl \
		<< "Grade to sign: " << AForm.getGradeSign() << std::endl \
		<< "Grade to execute: " << AForm.getGradeExe() << std::endl;
	return os;
}
