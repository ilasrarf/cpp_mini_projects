/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:04:08 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/12/09 10:57:19 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
    type = NULL;
    name = _name;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destractor called\n";
}

void HumanB::attack()
{
    if (type == NULL)
        std::cout << "ERROR" << std::endl;
    else
        std::cout << name << " " << "attacks with their" << " " << type->gettype() << std::endl;
}

void HumanB::setWeapon( Weapon& _weapon)
{
    type = &_weapon;
}