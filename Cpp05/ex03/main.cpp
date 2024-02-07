/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:37:33 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/30 15:21:17 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Bureaucrat obj(15);
    Bureaucrat obj1(4);
    Bureaucrat obj2(2);

    AForm* rrf;
    AForm* rrf1;
    AForm* rrf2;
    //---------------------------------//
    try
    {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        obj.signForm(*rrf);
        obj.executeForm(*rrf);  
    }
    catch(std::exception &e)
    {
        (void)e;
        std::cout << "error \n";
    }
    //---------------------------------//
    try
    {
        rrf1 = someRandomIntern.makeForm("shrubbery creation", "Bender1");
        obj1.signForm(*rrf1);
        obj1.executeForm(*rrf1);
    }
    catch(const std::exception& e)
    {
        (void)e;
        std::cout << "error \n";
    }
    //---------------------------------//
    
    try
    {
        rrf2 = someRandomIntern.makeForm("sd", "Bender2");
        obj2.signForm(*rrf2);
        obj2.executeForm(*rrf2); 
    }
    catch(const std::exception& e)
    {
        (void)e;
        std::cout << "error \n";
    }
    //---------------------------------//
    
    delete rrf;
    delete rrf1;
}