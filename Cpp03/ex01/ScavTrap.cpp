/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:52:00 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/09 12:32:59 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name )
{
    std::cout << "ScavTrap--> string constractor called" << std::endl;
    this->name = name;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap--> defult constractor called" << std::endl;
    this->name = "ScavTrap";
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->Energy_points > 0)
    {
        if (this->Hit_points <= 0)
            std::cout << "ScavTrap--> " << this->name << " already dead " << std::endl;
        else
        {
            std::cout << "ScavTrap-->" << this->name << " attacks " << target << " causing " << this->Attack_damage<< " points of damage!" << std::endl;
            this->Energy_points--;
        }
    }
    else
        std::cout << "ScavTrap-->" << this->name << " no Energy points" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap& obj)
{
    std::cout << "ScavTrap--> defult copy constractor called" << std::endl;
    this->name = obj.name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& obj)
{
    std::cout << "ScavTrap--> Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        this->Hit_points = obj.Hit_points;
        this->Energy_points = obj.Energy_points;
        this->Attack_damage = obj.Attack_damage;
    }
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap--> destructor called" << std::endl;
}