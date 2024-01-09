/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:29:56 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/05 17:02:01 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap( std::string );
    FragTrap( FragTrap& );
    FragTrap& operator=( const FragTrap& );
    void attack( const std::string& );
    void highFivesGuys(void);
    ~FragTrap();
};

#endif