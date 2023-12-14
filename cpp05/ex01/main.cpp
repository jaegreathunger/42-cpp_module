/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:48:52 by jaeshin           #+#    #+#             */
/*   Updated: 2023/12/14 15:29:12 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat person = Bureaucrat("Jaejun", 42);
		std::cout << person;
		Form ftForm = Form("42", 43, 0);
		std::cout << ftForm;
		person.signForm(ftForm);
	}
	catch (Bureaucrat::GradeTooHighException const &e)
	{
		std::cout << "Error: GradeTooHighException: " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException const &e)
	{
		std::cout << "Error: GradeTooLowException: " << e.what() << std::endl;
	}
	return 0;
}
