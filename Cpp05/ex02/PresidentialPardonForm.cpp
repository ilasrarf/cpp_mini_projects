/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 22:40:09 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/29 18:28:41 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm_def", 25, 5), target("def")
{}

PresidentialPardonForm::PresidentialPardonForm( std::string Target ) : AForm("PresidentialPardonForm_def", 25, 5), target(Target)
{}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm& obj) : AForm(obj)
{
    *this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& obj )
{
    if (this != &obj)
        this->target = obj.target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
        if (this->is_signed != true)
            throw (AForm::GradeNotSigned());
        if (executor.getGrade() > this->getGrade_to_exec())
            throw (AForm::GradeTooLowException());
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}