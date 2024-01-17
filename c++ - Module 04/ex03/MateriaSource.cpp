/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:45:32 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/15 15:19:47 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i <= 3; i++)
		this->mat[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource& obj)
{
	*this = obj;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& obj )
{
	if (this != &obj)
	{
		// std::cout << "test\n";
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

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->mat[i] == NULL && m)
		{
			this->mat[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i <= 3; i++)
	{
		if (this->mat[i] && this->mat[i]->getType() == type)
			return (this->mat[i]->clone());
	}
	return (NULL);
}

MateriaSource::~MateriaSource()
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