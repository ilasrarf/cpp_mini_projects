/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:45:41 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/10 19:09:27 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "Brain defult constracter" << std::endl;
}

Brain::Brain( const Brain& obj)
{
    std::cout << "Brain copy constracter" << std::endl;
    *this = obj;
}

Brain& Brain::operator=( const Brain& obj)
{
	std::cout << "Brain copy assignment operator" << std::endl;
    if (this != &obj)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destractor" << std::endl;
}