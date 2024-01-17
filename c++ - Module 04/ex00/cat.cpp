/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:20:55 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/15 19:56:54 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constractor called" << std::endl;
}

Cat::Cat(const Cat& obj)
{
	this->type = obj.type;
	std::cout << "Cat copy constractor called" << std::endl;

}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat make sound :)" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destractor called" << std::endl;
}