/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:52:15 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/11 18:14:07 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"


class Cure : public AMateria
{
public:
    Cure();
    Cure( const Cure& );
    AMateria* clone() const;
    void use(ICharacter& target);
    Cure& operator=( const Cure& );
    ~Cure();
};

#endif