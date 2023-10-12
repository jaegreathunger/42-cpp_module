/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:17:23 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/12 19:19:39 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// init with 0
Fixed::Fixed() : fixedPointNbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// init with int
Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointNbr = (n << this->fractionalBits);
}

// init with float
Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointNbr = static_cast<int>(roundf(f * (1 << this->fractionalBits)));
}

// init with a copy
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// deconstruct
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// operator=
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixedPointNbr = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->fixedPointNbr;
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointNbr = raw;
}

// from float to int
int Fixed::toInt(void) const
{
	return this->fixedPointNbr >> this->fractionalBits;
}

// from int to float
float Fixed::toFloat(void)  const
{
	return static_cast<float>(this->fixedPointNbr) / (1 << this->fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
