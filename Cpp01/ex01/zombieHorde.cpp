/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:40:50 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/11/27 22:15:08 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
    Zombie* p = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        p[i].set_name(name);
    }
    return p;
}