/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:35:45 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/07 14:58:54 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

template <typename T> class Array
{
    private:
        unsigned int N;
        T *arr;
    public:
        Array();
        Array( unsigned int );
        ~Array();
        Array( const Array& );
        Array& operator=( const Array& );
        T& operator[]( unsigned int );
        size_t size() const;
};

#endif