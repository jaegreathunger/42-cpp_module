/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:27:35 by jaeshin           #+#    #+#             */
/*   Updated: 2023/12/14 15:27:36 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const _name;
		bool _signed;
		int const _gradeSign;
		int const _gradeExe;

	public:
		Form(Form const &obj);
		Form(std::string const &name, int gradeSign, int gradeExe);
		Form &operator=(Form const &rhs);
		~Form();

		std::string getName() const;
		bool getSigned() const;
		int getGradeSign() const;
		int getGradeExe() const;

		void beSigned(Bureaucrat const &bureaucrat);

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

		friend std::ostream &operator<<(std::ostream &os, Form const &form);
};
