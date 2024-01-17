/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:15:38 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/09 12:32:53 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name )
{
    std::cout << "FragTrap--> string constractor called" << std::endl;
    this->name = name;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap()
{
    std::cout << "FraTrgap--> defult constractor called" << std::endl;
    this->name = "FraTrgap";
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap( FragTrap& obj)
{
    std::cout << "FragTrap--> defult copy constractor called" << std::endl;
    this->name = obj.name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
}

FragTrap& FragTrap::operator=( const FragTrap& obj)
{
    std::cout << "FragTrap--> Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        this->Hit_points = obj.Hit_points;
        this->Energy_points = obj.Energy_points;
        this->Attack_damage = obj.Attack_damage;
    }
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "high five" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap--> destructor called" << std::endl;
}