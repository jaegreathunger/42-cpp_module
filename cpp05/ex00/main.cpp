/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:48:52 by jaeshin           #+#    #+#             */
/*   Updated: 2023/12/13 20:48:53 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat person = Bureaucrat("Jaejun", 42);
		person.increment();
		std::cout << person;
		person.decrement();
		std::cout << person;
		person.increment();
		std::cout << person;
	}
	catch (Bureaucrat::GradeTooHighException const &err)
	{
		std::cout << "Error: GradeTooHighException: " << err.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException const &err)
	{
		std::cout << "Error: GradeTooLowException: " << err.what() << std::endl;
	}
	return 0;
}
