/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:49:25 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/29 14:41:36 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> values;

    values.push_back(1122);
    values.push_back(212);
    values.push_back(32);
    values.push_back(45);
    values.push_back(458);
    values.push_back(3345);

    try
    {
        easyfind(values, 32);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}