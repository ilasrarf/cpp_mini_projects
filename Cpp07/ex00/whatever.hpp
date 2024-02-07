/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:59:32 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/06 21:42:22 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

template <typename T>
void swap ( T &a, T &b )
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename I>
I min ( I a, I b )
{
    if (a < b)
        return a;
    return b;
}

template <typename A>
A max ( A a, A b )
{
    if (a > b)
        return a;
    return b;   
}

#endif