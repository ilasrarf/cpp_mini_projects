/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:15:22 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/04 16:26:40 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

struct Data
{
    int val;
};

class Serializer 
{
    public:
        Serializer();
        ~Serializer();
        Serializer(const Serializer& copy);
        Serializer& operator=(const Serializer& obj);

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif