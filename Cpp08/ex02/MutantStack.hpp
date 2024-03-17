/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:53:27 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/03/02 15:00:27 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include<iostream>
#include<string>
#include<stack>
#include<deque>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {};
        MutantStack(const MutantStack& obj) : std::stack<T>(obj) {};
        // MutantStack& operator=(const MutantStack& obj) {};
        virtual ~MutantStack() {};

        typedef typename std::deque<T>::iterator iterator;

        iterator begin()
        {
            return (this->c.begin());
        }
    
        iterator end()
        {
            return (this->c.end());
        }
};

#endif