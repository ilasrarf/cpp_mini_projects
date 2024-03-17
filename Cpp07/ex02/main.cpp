/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:36:34 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/08 13:42:58 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main ()
{
    const Array<int> obj(5);
    const Array<int> obj1(12);

    try
    {
        obj[0] = 0;
        obj[1] = 1;
        obj[2] = 2;
        obj[3] = 3;
        obj[4] = 4;
        obj[-2] = 12;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    for(int i = 0; i < 5; i++)
        std::cout << obj[i] << std::endl;

    obj1 = obj;
    std::cout << "------------\n";
    try
    {
        obj1[0] = 42;
        obj1[1] = 1337;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    for(int i = 0; i < 5; i++)
        std::cout << obj1[i] << std::endl;
}
