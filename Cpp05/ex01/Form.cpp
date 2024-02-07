/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:52:39 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/30 15:02:02 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : name("def_form"), grade_to_sign(1), grade_to_exec(5), is_signed(0)
{}

Form::Form( std::string name, int req_sign, int req_exec) : name(name), grade_to_sign(req_sign), grade_to_exec(req_exec), is_signed(0)
{
    try
    {
        if (this->getGrade_to_exec() < 1 || this->getGrade_to_sign() < 1)
            throw (Form::GradeTooLowException());
        else if (this->getGrade_to_exec() > 150 || this->getGrade_to_sign() > 150)
            throw (Form::GradeTooHighException());
    }
    catch(const std::exception& e)
    {
        std::cerr << "AForm error: " << e.what() << '\n';
    }
}

Form::Form( Form& obj ) : name(obj.getName()), grade_to_sign(obj.getGrade_to_sign()), grade_to_exec(obj.getGrade_to_exec()), is_signed(obj.getIs_signed())
{
    *this = obj;
}

Form& Form::operator=( const Form& obj )
{
    (void)obj;
    return *this;
}

//---------geters------//

std::string Form::getName() const
{
    return (this->name);
}

bool Form::getIs_signed() const
{
    return (this->is_signed);
}

int Form::getGrade_to_sign() const
{
    return (this->grade_to_sign);
}

int Form::getGrade_to_exec() const
{
    return (this->grade_to_exec);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("too Low");
}

void Form::beSigned( Bureaucrat& obj)
{
    try
    {
        if (obj.getGrade() > 150)
            throw (Form::GradeTooHighException());
        else if (obj.getGrade() < 1)
            throw (Form::GradeTooLowException());

        if (obj.getGrade() > this->getGrade_to_sign())
            throw(Form::GradeTooLowException());
        else
        {
            std::cout << "the form status was changed by " << obj.getName() << std::endl;
            this->is_signed = true;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "beSigned error : grade is " << e.what() << '\n';
    }
}

std::ostream& operator<<(std::ostream& os, const Form& Form)
{
    os << Form.getName() << std::endl << Form.getIs_signed() << std::endl << Form.getGrade_to_sign() << std::endl << Form.getGrade_to_exec() << std::endl;
    return os;
}

Form::~Form()
{}