/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:10:42 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/03 18:40:52 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    nb = 42;
}

Fixed::Fixed( const Fixed &obj )
{
    std::cout << "Copy constructor called" << std::endl;
    this->nb = obj.nb;
}

void Fixed::setRawBits( int const data )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->nb = data;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (nb);
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        nb = obj.nb;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "destractor called" << std::endl;
}
