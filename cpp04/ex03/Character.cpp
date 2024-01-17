/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:51:39 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/15 15:49:47 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->name = "Defult";
	for (int i = 0; i <= 3; i++)
		this->mat[i] = NULL;
}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i <= 3; i++)
		this->mat[i] = NULL;
}


Character::Character( const Character& obj )
{
	*this = obj;
}

Character& Character::operator=( const Character& obj )
{
	if (this != &obj)
	{
		this->name = obj.name;
		for (int i = 0; i <= 3; i++)
		{
			delete this->mat[i];
			if (obj.mat[i])
				this->mat[i] = obj.mat[i]->clone();
			else
				this->mat[i] = NULL;
		}
	}
	return (*this);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i <= 3; i++)
	{
		if (this->mat[i] == NULL)
		{
			this->mat[i] = m;
			return ;
		}
	}
}


void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->mat[idx] != NULL)
			this->mat[idx] = NULL;
	}
	else
		std::cout << "wrong idx" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->mat[idx])
		this->mat[idx]->use(target);
	else
		std::cout << "can't use" << std::endl;
}

std::string const & Character::getName() const
{
	return (this->name);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (this->mat[i] == this->mat[j] && i != j)
				this->mat[j] = NULL;
		}
		delete this->mat[i];
	}
}