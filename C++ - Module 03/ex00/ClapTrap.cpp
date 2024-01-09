/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:25:51 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/08 19:49:21 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "defult constractor called" << std::endl;
    this->name = "ClapTrap";
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "string constractor called" << std::endl;
    this->name = name;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap( ClapTrap& obj)
{
    std::cout << "defult copy constractor called" << std::endl;
    this->name = obj.name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        this->Hit_points = obj.Hit_points;
        this->Energy_points = obj.Energy_points;
        this->Attack_damage = obj.Attack_damage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy_points > 0)
    {
        if (this->Hit_points <= 0)
            std::cout << this->name << " already dead " << std::endl;
        else
        {
            std::cout << this->name << " attacks " << target << " causing " << this->Attack_damage << " points of damage!" << std::endl;
            this->Energy_points--;
        }
    }
    else
        std::cout << this->name << " no Energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Energy_points > 0)
    {
        if (this->Hit_points <= 0)
            std::cout << this->name << " already dead " << std::endl;
        else
        {
            std::cout << this->name << " take " << amount << " points of Damage " << std::endl;
            if (this->Hit_points <= amount)
                this->Hit_points = 0;
            else
                this->Hit_points -= amount;
            if (this->Hit_points <= 0)
                std::cout << this->name << " died " << std::endl;
        }
    }
    else
        std::cout << this->name << " no Energy points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_points > 0)
    {
        if (this->Hit_points <= 0)
            std::cout << this->name << " already dead " << std::endl;
        else
        {
            std::cout << this->name << " add " << amount << " points of health" << std::endl;
            this->Hit_points += amount;
            this->Energy_points--;
        }
    }
    else
        std::cout << this->name << " no Energy points" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called" << std::endl;
}