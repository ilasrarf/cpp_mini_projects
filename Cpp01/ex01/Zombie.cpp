/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:39:05 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/11/27 22:13:30 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "default constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout<< "Destrucor called " << name << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::set_name( std::string str )
{
    name = str;
}