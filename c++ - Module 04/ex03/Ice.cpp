/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:02:54 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/14 13:23:07 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
}

Ice::Ice( const Ice& obj )
{
    this->type = obj.type;
}

Ice& Ice::operator=( const Ice& obj )
{
    if (this != &obj)
       this->type = obj.type;
    return (*this);            
}

AMateria* Ice::clone() const
{
    return (new Ice());
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
}