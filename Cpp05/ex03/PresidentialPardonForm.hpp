/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 22:38:39 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/28 17:28:06 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm( std::string );
        PresidentialPardonForm( PresidentialPardonForm& );
        PresidentialPardonForm& operator=( const PresidentialPardonForm& );
        ~PresidentialPardonForm();

        void execute(Bureaucrat const & executor) const;
};

#endif