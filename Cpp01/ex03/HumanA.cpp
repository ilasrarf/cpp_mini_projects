/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:16:21 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/12/07 16:10:21 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _type) : type(_type)
{
    name = _name;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destractor called\n";
}

void HumanA::attack()
{
    std::cout << name << " " << "attacks with their" << " " << type.gettype() << std::endl;
}