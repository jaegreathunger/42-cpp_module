/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:27:30 by jaeshin           #+#    #+#             */
/*   Updated: 2023/12/14 15:27:31 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, int gradeSign, int gradeExe) \
	: _name(name), _gradeSign(gradeSign), _gradeExe(gradeExe) {}

Form::Form(Form const &obj) \
	: _name(obj._name), _signed(obj._signed), _gradeSign(obj.getGradeSign()), _gradeExe(obj.getGradeExe()) {}

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		_signed = rhs.getSigned();
	return *this;
}

Form::~Form() {}

std::string Form::getName() const
{
	return _name;
}

bool Form::getSigned() const
{
	return _signed;
}

int Form::getGradeSign() const
{
	return _gradeSign;
}

int Form::getGradeExe() const
{
	return _gradeExe;
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (_gradeSign < bureaucrat.getGrade())
		throw GradeTooLowException();
	_signed = true;
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << "Form's name: " << form.getName() << std::endl \
		<< "Grade to sign: " << form.getGradeSign() << std::endl \
		<< "Grade to execute: " << form.getGradeExe() << std::endl;
	return os;
}
