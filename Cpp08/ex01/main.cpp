/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:30:09 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/27 13:44:19 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << "------------- TEST 1 -------------\n";
    Span sp = Span(5);
    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(-11);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    std::cout << "------------- TEST 2 -------------\n";

    Span sp1 (5);
    std::vector<int> ar1;
    ar1.push_back(6);
    ar1.push_back(3);
    ar1.push_back(17);
    ar1.push_back(9);
    ar1.push_back(-11);
    try
    {
        sp1.add_mult(std::begin(ar1), std::end(ar1));
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    std::cout << sp1.shortestSpan() << std::endl;
    std::cout << sp1.longestSpan() << std::endl;
}
