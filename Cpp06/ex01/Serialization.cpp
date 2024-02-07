/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:10:36 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/05 17:01:54 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serializer::Serializer()
{}

Serializer::~Serializer()
{}

Serializer::Serializer(const Serializer& copy)
{
    *this = copy;
}

Serializer& Serializer::operator=(const Serializer& obj)
{
    (void)obj;
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data var;
    var.val = 42;
    uintptr_t varptr = Serializer::serialize(&var);
    Data* var1 = Serializer::deserialize(varptr);
    std::cout << "\033[1;33m ####### Test : #######" << std::endl;
    std::cout << "original : " << var.val << std::endl;
    std::cout << "after deserialize : " << var1->val << std::endl;
    return 0;
}