/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:49:41 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/15 14:53:37 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include <iostream>
#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string name;
    AMateria* mat[4];
public:
    Character();
    Character( const Character& );
    Character( std::string );
    std::string const & getName() const;
    Character& operator=( const Character& );
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    virtual ~Character();
};

#endif