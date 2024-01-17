/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:19:19 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/10 18:08:02 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
protected:
    Brain* brain;
public:
    Cat();
    Cat( const Cat& );
    Cat& operator=( const Cat& );
    void makeSound() const;
    ~Cat();
};

#endif