/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:37:35 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/12/12 15:39:55 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>
#include <fstream>

void        rep_func( char ** );
std::string ft_replace( std::string, std::string, std::string );
int         check_s1( std::string, std::string, int );

#endif