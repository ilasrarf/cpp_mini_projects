/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:53:03 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/26 20:35:26 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
class Form
{
    private:
        const std::string name;
        const int grade_to_sign;
        const int grade_to_exec;
        bool is_signed;
        
    public:
        Form();
        Form( std::string, int, int );
        Form( Form& );
        Form& operator=( const Form& );
        ~Form();

        std::string getName() const;
        bool getIs_signed() const;
        int getGrade_to_sign() const;
        int getGrade_to_exec() const;

        void beSigned( Bureaucrat& );

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

std::ostream& operator<<(std::ostream& os, const Form& Form);

#endif