/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:20:53 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/15 20:14:44 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"


Animal::Animal()
{
	this->type = "animal";
	std::cout << "animal constractor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
	this->type = obj.type;
	std::cout << "animal copy constractor called" << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}

Animal& Animal::operator=(const Animal& obj)
{
	std::cout << "animal copy assignment operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "animal make sound :)" << std::endl;
}

Animal::~Animal()
{
	std::cout << "animal destractor called" << std::endl;
}