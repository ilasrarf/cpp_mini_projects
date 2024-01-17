/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:18:41 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/11 18:12:26 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria
{
public:
    Ice();
    Ice( const Ice& );
    AMateria* clone() const;
    void use(ICharacter& target);
    Ice& operator=( const Ice& );
    ~Ice();
};

#endif