/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:35:04 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/14 23:10:32 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    this->type = "AMateria";
}

AMateria::AMateria( std::string const & type )
{
    this->type = type;
}

AMateria::AMateria( const AMateria& obj )
{
    this->type = obj.type;
}

std::string const& AMateria::getType() const
{
    return(this->type);
}

AMateria& AMateria::operator=( const AMateria& obj )
{
    (void)obj;
    return (*this);
}

void AMateria::use( ICharacter& target )
{
    (void ) target;
    std::cout << "use AMateria" << this->type << std::endl;
}

AMateria::~AMateria()
{}