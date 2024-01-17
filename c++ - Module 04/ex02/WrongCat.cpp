/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 22:37:20 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/15 20:16:49 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat()
{
	std::cout << "WrongCat constractor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj)
{
	this->type = obj.type;
	std::cout << "WrongCat copy constractor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

std::string WrongCat::getType() const
{
	return(this->type);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat make sound :)" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destractor called" << std::endl;
}