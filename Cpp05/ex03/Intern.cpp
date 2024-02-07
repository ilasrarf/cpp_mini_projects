/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:56:25 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/30 15:20:35 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern( Intern& obj )
{
    *this = obj;
}

Intern& Intern::operator=( const Intern& obj )
{
    (void)obj;
    return (*this);
}

AForm* Intern::makeForm( std::string name, std::string target )
{
    AForm *hh;
    int z = 0;

    std::string names[3] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    
    for (int i = 0; i < 3; i++)
    {
        if (name == names[i])
        {
            switch (i) {
                case 0:
                  z = 1;
                  hh = new RobotomyRequestForm(target);
                  break;
                case 1:
                  z = 1;
                  hh = new PresidentialPardonForm(target);
                  break;
                case 2:
                  z = 1;
                  hh = new ShrubberyCreationForm(target);
                  break;
                default:
                  hh = NULL;
            }
        }
    }
    if (z == 1)
    {
        std::cout << "Intern has been creat a AForm\n";
        return (hh);
    }

    std::cout << "Intern has not creat a AForm \n";
    throw (AForm::GradeNotSigned());
    return(NULL);
}

Intern::~Intern()
{}