/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:54:38 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/12 21:11:48 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl; // 0
	std::cout << ++a << std::endl; // 0.00390625
	std::cout << a << std::endl; // 0.00390625
	std::cout << a++ << std::endl; // 0.00390625

	std::cout << a << std::endl; // 0.0078125
	std::cout << b << std::endl; // 10.1016

	std::cout << Fixed::max( a, b ) << std::endl; // 10.1016

	//std::cout << a + b << std::endl;
	//std::cout << a - b << std::endl;
	//std::cout << a / b << std::endl;
	//std::cout << a * b << std::endl;
	return 0;
}
