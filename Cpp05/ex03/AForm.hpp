/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:34:59 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/29 16:17:43 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    protected:
        const std::string name;
        const int grade_to_sign;
        const int grade_to_exec;
        bool is_signed;
        
    public:
        AForm();
        AForm( std::string, int, int );
        AForm( AForm& );
        AForm& operator=( const AForm& );
        virtual ~AForm();

        std::string getName() const;
        bool getIs_signed() const;
        int getGrade_to_sign() const;
        int getGrade_to_exec() const;

        void beSigned( Bureaucrat& );

        virtual void execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        
        class GradeNotSigned : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const AForm& AForm);

#endif