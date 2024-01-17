/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:20:55 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/10 19:31:25 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat()
{
	std::cout << "Cat defult constracter" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& obj)
{
	std::cout << "Cat copy constracter" << std::endl;
	*this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat copy assignment operator" << std::endl;
	if (this != &obj) 
	{
		this->type = obj.type;
		this->brain = new Brain(*obj.brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat make sound :)" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destractor" << std::endl;
	delete this->brain;
}