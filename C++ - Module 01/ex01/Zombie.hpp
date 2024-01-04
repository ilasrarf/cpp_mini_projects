/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:39:15 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/11/27 22:20:29 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;
public:
    Zombie( void );
    ~Zombie( void );
    void set_name( std::string );
    void announce( void );
};

Zombie* zombieHorde(int N, std::string name );

#endif