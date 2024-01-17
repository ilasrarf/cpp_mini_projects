/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:22:50 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/10 20:16:05 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog()
{
	std::cout << "Dog defult constracter" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& obj)
{
	std::cout << "Dog copy constracter" << std::endl;
	*this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Dog copy assignment operator" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
		this->brain = new Brain(*obj.brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog make sound :)" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destractor" << std::endl;
	delete this->brain;
}