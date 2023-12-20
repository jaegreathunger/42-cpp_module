/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:48:58 by jaeshin           #+#    #+#             */
/*   Updated: 2023/12/20 13:46:30 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string const _name;
		int _grade;

		Bureaucrat();

	public:
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &obj);
		Bureaucrat &operator=(Bureaucrat const &rhs);
		~Bureaucrat();

		std::string const getName() const;
		int getGrade() const;

		void increment();
		void decrement();

		void signForm(AForm &form);

		void executeForm(AForm const &form);

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
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);
