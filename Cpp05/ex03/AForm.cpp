/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:34:53 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/30 15:02:31 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm() : name("def_AForm"), grade_to_sign(1), grade_to_exec(5), is_signed(0)
{}

AForm::AForm( std::string name, int req_sign, int req_exec) : name(name), grade_to_sign(req_sign), grade_to_exec(req_exec), is_signed(0)
{
    if (this->getGrade_to_exec() < 1 || this->getGrade_to_sign() < 1)
        throw (AForm::GradeTooLowException());
    else if (this->getGrade_to_exec() > 150 || this->getGrade_to_sign() > 150)
        throw (AForm::GradeTooHighException());
}

AForm::AForm( AForm& obj ) : name(obj.getName()), grade_to_sign(obj.getGrade_to_sign()), grade_to_exec(obj.getGrade_to_exec()), is_signed(obj.getIs_signed())
{
    *this = obj;
}

AForm& AForm::operator=( const AForm& obj )
{
    (void)obj;
    return *this;
}

//---------geters------//

std::string AForm::getName() const
{
    return (this->name);
}

bool AForm::getIs_signed() const
{
    return (this->is_signed);
}

int AForm::getGrade_to_sign() const
{
    return (this->grade_to_sign);
}

int AForm::getGrade_to_exec() const
{
    return (this->grade_to_exec);
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("too Low");
}

const char* AForm::GradeNotSigned::what() const throw()
{
    return ("not signed");
}

void AForm::beSigned( Bureaucrat& obj)
{
    try
    {
        if (obj.getGrade() > 150)
            throw (AForm::GradeTooHighException());
        else if (obj.getGrade() < 1)
            throw (AForm::GradeTooLowException());
        if (obj.getGrade() > this->getGrade_to_sign())
            throw(AForm::GradeTooLowException());
        else
        {
            std::cout << "the form status was changed by " << obj.getName() << std::endl;
            this->is_signed = true;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "beSigned : " << e.what() << '\n';
    }
}

std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
    os << AForm.getName() << std::endl << AForm.getIs_signed() << std::endl << AForm.getGrade_to_sign() << std::endl << AForm.getGrade_to_exec() << std::endl;
    return os;
}

AForm::~AForm()
{}