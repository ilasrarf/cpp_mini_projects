/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:46:17 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/03/02 15:19:39 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <algorithm>


class Span {
    private:
        unsigned int n;
        std::vector<int> lnb;
    public:
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span& copy);
        Span& operator=(const Span& obj);
        
        void addNumber(unsigned int NB);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        
        template <typename T>
        void add_mult(T bg, T end);
};

template <typename T>
void Span::add_mult(T bg, T end)
{
    while (bg != end)
    {
        this->addNumber(*bg);
        bg++;
    }
}

#endif