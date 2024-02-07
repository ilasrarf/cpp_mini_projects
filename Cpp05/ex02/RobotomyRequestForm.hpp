/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 22:14:51 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/28 15:45:00 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm( std::string );
        RobotomyRequestForm( RobotomyRequestForm& );
        RobotomyRequestForm& operator=( const RobotomyRequestForm& );
        ~RobotomyRequestForm();

        void execute(Bureaucrat const & executor) const;
};

#endif