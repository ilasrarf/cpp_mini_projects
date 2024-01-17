/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:53:20 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/12/20 20:42:52 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "constracter called\n";
}

Harl::~Harl()
{
    std::cout << "destracter called\n";
}

void Harl::debug( void )
{
    std::cout << "--> debug\n";
}

void Harl::info( void )
{
    std::cout << "--> info\n";
}

void Harl::warning( void )
{
    std::cout << "--> warning\n";
}

void Harl::error( void )
{
    std::cout << "--> error\n";
}

void Harl::complain( std::string level )
{
    void (Harl::*func[4])() = { &Harl::debug,&Harl::info,&Harl::warning,&Harl::error };
    std::string tab[] = {"DEBUG","INFO","WARNING","ERROR"};

    for(int i = 0; i < 4; i++)
    {
        if (level == tab[i])
        {
            (this->*func[i])();
            return ;
        }
    }
}