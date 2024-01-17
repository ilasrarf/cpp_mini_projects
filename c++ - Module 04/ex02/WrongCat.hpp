/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 22:35:15 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/10 15:28:10 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
protected:
    std::string type;
public:
    WrongCat();
    WrongCat( const WrongCat& );
    WrongCat& operator=( const WrongCat& );
    std::string getType() const;
    void makeSound() const;
    ~WrongCat();
};

#endif