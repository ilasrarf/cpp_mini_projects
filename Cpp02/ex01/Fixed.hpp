/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:00:34 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/03 18:59:57 by ilasrarf         ###   ########.fr       */
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
    static const int fb;
public:
    Fixed();
    Fixed( const int );
    Fixed( const float );
    Fixed( const Fixed & );
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed& operator=( const Fixed& );
    ~Fixed();
};
std::ostream& operator<<( std::ostream& os, const Fixed& );

#endif