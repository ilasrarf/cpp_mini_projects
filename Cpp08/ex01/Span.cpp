/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:39:20 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/03/02 15:20:49 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N) : n(N)
{}


Span::Span(const Span& obj) {
    *this = obj;
}

void Span::addNumber(unsigned int NB)
{
    if (this->lnb.size() < this->n)
        this->lnb.push_back(NB);
    else
        throw (std::out_of_range("array is full :("));
}

Span& Span::operator=(const Span& obj) {
    if (this != &obj) {
        this->n = obj.n;
        this->lnb = obj.lnb;
    }
    return (*this);
}

unsigned int Span::shortestSpan()
{
    unsigned int stnb = 4294967295;
    std::sort(this->lnb.begin(), this->lnb.end());
    std::vector<int>::iterator it;

    it = this->lnb.begin();
    for (unsigned int i = 0; i < this->n - 1 ; i++)
    {
        if ((unsigned int)*(it + 1) - *it <= stnb)
        {
            stnb = *(it + 1) - *it;
            it++;
        }
    }
    return (stnb);
}

unsigned int Span::longestSpan()
{
    std::sort(this->lnb.begin(), this->lnb.end());
    std::vector<int>::iterator it;

    it = this->lnb.begin();
    return (*(it + n - 1) - *it);
}

Span::~Span()
{}
