/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:05:02 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/07 12:53:05 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int main()
{
    int a = 4;
    int b = 88;
    
    swap(a, b);
    std::cout << "(a)--> " << a << " (b)--> " << b << std::endl;
    std::cout << "min --> "<< min<int>(a, b) << std::endl;
    std::cout << "max --> "<< max<int>(a, b) << std::endl;
    
    std::cout << "------------------------------------------" << std::endl;
    
    char a1 = 'a';
    char b1 = 'b';
    
    swap(a1, b1);
    std::cout << "(a)--> " << a1 << " (b)--> " << b1 << std::endl;
    std::cout << "min --> "<< min(a1, b1) << std::endl;
    std::cout << "max --> "<< max(a1, b1) << std::endl;
    
    std::cout << "------------------------------------------" << std::endl;
    
    float a2 = 1.5;
    float b2 = 2.5;
    
    swap(a2, b2);
    std::cout << "(a)--> " << a2 << " (b)--> " << b2 << std::endl;
    std::cout << "min --> "<< min(a2, b2) << std::endl;
    std::cout << "max --> "<< max(a2, b2) << std::endl;
}
