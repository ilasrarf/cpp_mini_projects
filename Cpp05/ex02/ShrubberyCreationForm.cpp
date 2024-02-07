/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:06:39 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/29 18:31:27 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
 
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm_def", 145, 137), target("def")
{}

ShrubberyCreationForm::ShrubberyCreationForm( std::string _target ) : AForm("ShrubberyCreationForm_def", 145, 137), target(_target)
{}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm& obj ) : AForm(obj)
{
    *this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& obj )
{
    if (this != &obj)
        this->target = obj.target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->is_signed != true)
        throw (AForm::GradeNotSigned());
    if (executor.getGrade() > this->getGrade_to_exec())
        throw (AForm::GradeTooLowException());
    std::string name = this->target + "_shrubbery";
    
    std::ofstream out_file(name);
    if (!out_file.is_open())
	{
		std::cerr << "ERROR output file" << std::endl;
		out_file.close();
		return ;
	}
    out_file << "          .     .  .      +     .      .          .\n";
    out_file << "     .       .      .     #       .           .\n";
    out_file << "        .      .         ###            .      .      .\n";
    out_file << "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n";
    out_file << "          .      . \"####\"###\"####\"  .\n";
    out_file << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n";
    out_file << "  .             \"#########\"#########\"        .        .\n";
    out_file << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n";
    out_file << "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n";
    out_file << "                .\"##\"#####\"#####\"##\"           .      .\n";
    out_file << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n";
    out_file << "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n";
    out_file << "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n";
    out_file << "            .     \"      000      \"    .     .\n";
    out_file << "       .         .   .   000     .        .       .\n";
    out_file << ".. .. ..................O000O........................ ......\n";

    out_file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}