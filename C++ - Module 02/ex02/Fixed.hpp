/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 13:14:09 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/03 19:16:58 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int nb;
    static const int fb = 8;
public:
    Fixed();
    Fixed( const int );
    Fixed( const float );
    Fixed( const Fixed & );
    Fixed& operator=( const Fixed& );
    float   toFloat( void ) const;
    int     toInt( void ) const;
    void    setRawBits( int const data );
    int     getRawBits( void ) const;
    bool    operator>( const Fixed& );
    bool    operator<( const Fixed& );
    bool    operator==( const Fixed& );
    bool    operator<=( const Fixed& );
    bool    operator>=( const Fixed& );
    bool    operator!=( const Fixed& );
    Fixed   operator-( const Fixed& );
    Fixed   operator*( const Fixed& );
    Fixed   operator/( const Fixed& );
    Fixed   operator+( const Fixed& );
    Fixed&  operator++();
    Fixed&  operator--();
    Fixed   operator++( int );
    Fixed   operator--( int );
    static Fixed&    min( Fixed& , Fixed& );
    static Fixed&    max( Fixed& , Fixed& );
    static const Fixed&    min( const Fixed& , const Fixed& );
    static const Fixed&    max( const Fixed& , const Fixed& );
    ~Fixed();
};

std::ostream& operator<<( std::ostream& os, const Fixed& );

#endif