/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:02:11 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/08 20:38:17 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{   
    ClapTrap a("a");
    ClapTrap b("b");
    

    a.attack("b");
    b.takeDamage(15);

    for (int i = 0; i <= 5; i++)
    {
        b.beRepaired(1);
    }
}