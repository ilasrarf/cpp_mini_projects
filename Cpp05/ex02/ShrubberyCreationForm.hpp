/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:01:32 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/28 15:45:05 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm( std::string );
        ShrubberyCreationForm( ShrubberyCreationForm& );
        ShrubberyCreationForm& operator=( const ShrubberyCreationForm& );
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const & executor) const;
};

#endif