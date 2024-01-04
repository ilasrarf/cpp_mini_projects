/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 13:54:07 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/03 18:45:26 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->nb = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed( const int nb )
{
    this->nb = nb << this->fb;
}

Fixed::Fixed(const float nb)
{
    this->nb = roundf(nb * (1 << this->fb));
}

Fixed::Fixed( const Fixed& obj )
{
    this->nb = obj.nb;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    if (this != &obj)
        nb = obj.nb;
    return *this;
}


void Fixed::setRawBits( int const data )
{
    this->nb = data;
}

int Fixed::getRawBits( void ) const
{
    return (nb);
}

bool Fixed::operator>( const Fixed& obj )
{
    if (this->nb > obj.nb)
        return (1);
    return (0);
}

bool Fixed::operator<( const Fixed& obj )
{
    if (this->nb < obj.nb)
        return (1);
    return (0);
}

bool Fixed::operator==( const Fixed& obj )
{
    if (this->nb == obj.nb)
        return (1);
    return (0);
}

bool Fixed::operator<=( const Fixed& obj )
{
    if (this->nb <= obj.nb)
        return (1);
    return (0);
}

bool Fixed::operator>=( const Fixed& obj )
{
    if (this->nb >= obj.nb)
        return (1);
    return (0);
}

bool Fixed::operator!=( const Fixed& obj )
{
    if (this->nb != obj.nb)
        return (1);
    return (0);
}

Fixed Fixed::operator-( const Fixed& obj )
{
    return (Fixed(this->nb - obj.nb));
}

Fixed Fixed::operator+( const Fixed& obj )
{
    return (Fixed(this->nb + obj.nb));
}

Fixed Fixed::operator*( const Fixed& obj )
{
    Fixed tmp;
    
    tmp.setRawBits((this->nb * obj.nb) / (1 << obj.fb));
    return (tmp);
}

Fixed Fixed::operator/( const Fixed& obj )
{
    Fixed tmp;
    
    tmp.setRawBits((this->nb / obj.nb) * (1 << obj.fb));
    return (tmp);
}

int Fixed::toInt( void ) const
{
    return (this->nb >> this->fb);
}

float Fixed::toFloat( void ) const
{
    return ((float)this->nb / (1 << this->fb));
}

Fixed& Fixed::operator++()
{
    this->nb++;
    return (*this);
}

Fixed Fixed::operator++( int )
{
    Fixed tmp(*this);
    this->nb++;
    return (tmp);
}

Fixed& Fixed::operator--()
{
    this->nb--;
    return (*this);
}

Fixed Fixed::operator--( int )
{
    Fixed tmp(*this);

    this->nb--;
    return (tmp);
}

Fixed& Fixed::min( Fixed& obj1 , Fixed& obj2)
{
    if (obj1.nb < obj2.nb)
        return (obj1);
    return (obj2);
}

const Fixed& Fixed::min( const Fixed& obj1 , const Fixed& obj2 )
{
    if (obj1.nb < obj2.nb)
        return (obj1);
    return (obj2);
}

const Fixed& Fixed::max( const Fixed& obj1 , const Fixed& obj2 )
{
    if (obj1.nb > obj2.nb)
        return (obj1);
    return (obj2);
}

Fixed& Fixed::max( Fixed& obj1 , Fixed& obj2)
{
    if (obj1.nb > obj2.nb)
        return (obj1);
    return (obj2);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat(); 
    return os;
}