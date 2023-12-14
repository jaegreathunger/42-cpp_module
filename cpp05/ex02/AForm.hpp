#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const _name;
		bool _signed;
		int const _gradeSign;
		int const _gradeExe;

	public:
		AForm(AForm const &obj);
		AForm(std::string const &name, int gradeSign, int gradeExe);
		AForm &operator=(AForm const &rhs);
		virtual ~AForm();

		std::string getName() const;
		bool getSigned() const;
		int getGradeSign() const;
		int getGradeExe() const;

		void beSigned(Bureaucrat const &bureaucrat);

		virtual void execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade is too high!";
				}
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade is too low!";
				}
		};

		class NotSignedForm: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Form is not signed!";
				}
		};

		friend std::ostream &operator<<(std::ostream &os, AForm const &Aform);
};
