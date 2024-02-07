/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:15:01 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/28 15:52:07 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat( int );
        Bureaucrat( Bureaucrat& );
        Bureaucrat& operator=( const Bureaucrat& );
        
        int getGrade() const;
        std::string getName() const;

        void increment();
        void decrement();
        
        void signForm( AForm& );
        
        void executeForm(AForm const & form) const;

        ~Bureaucrat();
    
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
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat);

#endif