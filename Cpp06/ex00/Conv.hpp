/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:42:51 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/05 16:52:00 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_HPP
#define CONV_HPP

#include<iostream>
#include<string>
#include <sstream>
#include <iomanip>

class ScalarConverter {
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter( const ScalarConverter& );
        ScalarConverter& operator=( const ScalarConverter& );
    public:
        static void convert( const std::string );
};

#endif