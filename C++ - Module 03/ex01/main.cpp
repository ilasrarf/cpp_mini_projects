/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:02:11 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/08 20:40:29 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{   
    ScavTrap b("b");

    b.attack("test");
    b.takeDamage(15);
    for (int i = 0; i <= 5; i++)
    {
        b.beRepaired(1);
    }
    b.guardGate();
}