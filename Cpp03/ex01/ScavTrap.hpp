/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:42:12 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/05 15:54:00 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCARVTRAP_HPP
#define SCARVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap( std::string );
    ScavTrap( ScavTrap& );
    ScavTrap& operator=( const ScavTrap& );
    void attack( const std::string& );
    void guardGate();
    ~ScavTrap();
};

#endif
