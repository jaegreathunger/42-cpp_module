/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:17:23 by jaeshin           #+#    #+#             */
/*   Updated: 2023/10/12 21:41:17 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointNbr(0) {}

Fixed::Fixed(const int n)
{
	this->fixedPointNbr = (n << this->fractionalBits);
}

Fixed::Fixed(const float f)
{
	this->fixedPointNbr = static_cast<int>(roundf(f * (1 << this->fractionalBits)));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &other)
{
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

int Fixed::toInt(void) const
{
	return this->fixedPointNbr >> this->fractionalBits;
}

float Fixed::toFloat(void)  const
{
	return static_cast<float>(this->fixedPointNbr) / (1 << this->fractionalBits);
}

bool Fixed::operator>(const Fixed &other) const
{
	if (this->fixedPointNbr > other.fixedPointNbr)
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &other) const
{
	if (this->fixedPointNbr < other.fixedPointNbr)
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &other) const
{
	if (this->fixedPointNbr >= other.fixedPointNbr)
		return true;
	return false;
}
bool Fixed::operator<=(const Fixed &other) const
{
	if (this->fixedPointNbr <= other.fixedPointNbr)
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &other) const
{
	if (this->fixedPointNbr != other.fixedPointNbr)
		return true;
	return false;
}

bool Fixed::operator==(const Fixed &other) const
{
	if (this->fixedPointNbr == other.fixedPointNbr)
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed &other)
{
	Fixed fixed(this->toFloat() + other.toFloat());
	return fixed;
}

Fixed Fixed::operator-(const Fixed &other)
{
	Fixed fixed(this->toFloat() - other.toFloat());
	return fixed;
}

Fixed Fixed::operator*(const Fixed &other)
{
	Fixed fixed(this->toFloat() * other.toFloat());
	return fixed;
}

Fixed Fixed::operator/(const Fixed &other)
{
	Fixed fixed(this->toFloat() / other.toFloat());
	return fixed;
}

Fixed &Fixed::operator++()
{
	this->fixedPointNbr++;
	return *this;
}

// (int)parameter used as a maker
Fixed Fixed::operator++(int)
{
	Fixed fixed(*this);
	this->fixedPointNbr++;
	return fixed;
}

Fixed &Fixed::operator--()
{
	this->fixedPointNbr--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed fixed(*this);
	this->fixedPointNbr--;
	return fixed;
}

Fixed &Fixed::min(Fixed &ref1, Fixed &ref2)
{
	if (ref1 >= ref2)
		return ref2;
	return ref1;
}

const Fixed &Fixed::min(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1 >= ref2)
		return ref2;
	return ref1;
}

Fixed &Fixed::max(Fixed &ref1, Fixed &ref2)
{
	if (ref1 >= ref2)
		return ref1;
	return ref2;
}

const Fixed &Fixed::max(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1 >= ref2)
		return ref1;
	return ref2;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
