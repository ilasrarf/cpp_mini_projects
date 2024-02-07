/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:37:33 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/30 15:34:56 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat obj(4);
    Bureaucrat obj1(1);
    Bureaucrat obj2(1);
    
    AForm *rff = new RobotomyRequestForm("AForm");
    AForm *rff1 = new PresidentialPardonForm("AForm");
    AForm *rff2 = new ShrubberyCreationForm("AForm");

    obj.signForm(*rff);
    obj1.signForm(*rff1);
    obj2.signForm(*rff2);
    
    obj.executeForm(*rff);
    obj1.executeForm(*rff1);
    obj2.executeForm(*rff2);

    delete rff;
    delete rff1;
    delete rff2;
}