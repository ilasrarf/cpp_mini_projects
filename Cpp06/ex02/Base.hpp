/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:56:26 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/04 20:21:19 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include <cstdlib>
#include <ctime>

class Base 
{
    public:
        virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base 
{};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif