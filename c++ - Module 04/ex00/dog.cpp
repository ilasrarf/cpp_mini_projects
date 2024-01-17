/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:22:50 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/15 19:57:37 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constractor called" << std::endl;
}

Dog::Dog(const Dog& obj)
{
	this->type = obj.type;
	std::cout << "Dog copy constractor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog make sound :)" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destractor called" << std::endl;
}