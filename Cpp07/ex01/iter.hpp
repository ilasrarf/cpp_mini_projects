/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:50:47 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/07 19:16:05 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

template <typename T, typename F>
void iter (T *arr, int len, F f)
{
    if (arr && len > 0 && f)
        for (int i = 0; i < len; i++)
            f(arr[i]);
}

#endif