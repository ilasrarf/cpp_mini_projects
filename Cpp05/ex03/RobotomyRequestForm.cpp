/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 22:16:41 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/29 19:22:03 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm_def", 72, 45), target("def")
{}

RobotomyRequestForm::RobotomyRequestForm( std::string Target ) : AForm("RobotomyRequestForm_def", 72, 45), target(Target)
{}


RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm& obj) : AForm(obj)
{
    *this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& obj )
{
    if (this != &obj)
        this->target = obj.target;
    return (*this);
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
        int randInt = std::rand();
        if (this->is_signed != true)
            throw (AForm::GradeNotSigned());
        if (executor.getGrade() > this->getGrade_to_exec())
            throw (AForm::GradeTooLowException());

        if (randInt % 2)
            std::cout << this->target << " has been robotomized successfully" << std::endl;
        else
            std::cout << "robotomy failed" << std::endl;  
}

RobotomyRequestForm::~RobotomyRequestForm()
{}