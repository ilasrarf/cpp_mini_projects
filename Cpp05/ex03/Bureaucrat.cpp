/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:17:58 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/30 14:59:13 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(1)
{}

Bureaucrat::Bureaucrat( Bureaucrat& obj )
{
    *this = obj;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& obj)
{
    if(this != &obj)
        this->grade = obj.grade;
    return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("too Low");
}

Bureaucrat::Bureaucrat(int grade) : name("Bureaucrat")
{
    this->grade = grade;
    try
    {
        if (grade > 150)
            throw (Bureaucrat::GradeTooHighException());
        else if (grade < 1)
            throw (Bureaucrat::GradeTooLowException());
    }
    catch(std::exception &e)
    {
       std::cout << "grade out of range : { " << e.what() << " }" << std::endl;
       this->grade = 1;
    }
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::signForm( AForm& obj )
{
    obj.beSigned(*this);
}

void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
            form.execute(*this);
    }
    catch (const std::exception& e)
    {
        std::cout << this->getName() << " not executed " << form.getName() << std::endl;
    }
}

void Bureaucrat::increment()
{
    this->grade -= 1;
    try
    {
        if (grade > 150)
            throw (Bureaucrat::GradeTooHighException());
        else if (grade < 1)
            throw (Bureaucrat::GradeTooLowException());
    }
    catch(std::exception &e)
    {
       std::cout << "grade out of range : " << e.what() << std::endl;
    }
}

void Bureaucrat::decrement()
{
    this->grade += 1;
    try
    {
        if (grade > 150)
            throw (Bureaucrat::GradeTooHighException());
        else if (grade < 1)
            throw (Bureaucrat::GradeTooLowException());
    }
    catch(std::exception &e)
    {
       std::cout << "grade out of range : " << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat)
{
    os << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
    return os;
}