/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:01:03 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/03 18:52:11 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fb = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
    std::cout << "int constructor called" << std::endl;
    this->nb = nb << this->fb;
}

Fixed::Fixed(const float nb)
{
    std::cout << "float constructor called" << std::endl;
    this->nb = roundf(nb * (1 << this->fb));
}

Fixed::Fixed( const Fixed &obj )
{
    std::cout << "Copy constructor called" << std::endl;
    this->nb = obj.nb;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        nb = obj.nb;
    return *this;
}

int Fixed::toInt( void ) const
{
    return (this->nb >> this->fb);
}

float Fixed::toFloat( void ) const
{
    return ((float)this->nb / (1 << this->fb));
}

Fixed::~Fixed()
{
    std::cout << "destractor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}