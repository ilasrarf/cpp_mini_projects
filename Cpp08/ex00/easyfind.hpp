/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:54:37 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/29 14:41:25 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iostream>
#include<string>
#include <algorithm>
#include <vector>

template <typename T>
void easyfind(T& values, int to_find)
{
    if(std::find(values.begin(), values.end(), to_find) != values.end())
        std::cout << to_find << std::endl;
    else
        throw (std::out_of_range("---> not found"));
}

#endif