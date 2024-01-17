/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:57:31 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/13 18:38:41 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria* mat[4];
public:
    MateriaSource();
    MateriaSource( MateriaSource& );
    void learnMateria( AMateria* );
    AMateria* createMateria(std::string const &);
    MateriaSource& operator=( const MateriaSource& );
    ~MateriaSource();
};

#endif