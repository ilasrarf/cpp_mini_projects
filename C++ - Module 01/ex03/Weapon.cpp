/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:29:33 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/12/20 17:47:21 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::gettype()
{
    return (type);
}

Weapon::Weapon(std::string _type)
{
    type = _type;
}
Weapon::~Weapon()
{
    std::cout << "Weapon destractor called " << this->gettype()<< std::endl;
}

void Weapon::setType( std::string _type)
{
    type = _type;
}

