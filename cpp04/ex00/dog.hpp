/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:22:01 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/10 17:58:19 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog( const Dog& );
    Dog& operator=( const Dog& );
    void makeSound() const;
    ~Dog();
};

#endif