/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:11:01 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/03 18:07:04 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int nb;
    static const int fb = 8;
public:
    Fixed();
    Fixed( const Fixed & );
    Fixed& operator=(const Fixed& obj);
    int getRawBits( void ) const;
    void setRawBits( int const data );
    ~Fixed();
};

#endif