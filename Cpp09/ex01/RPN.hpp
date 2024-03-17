/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:26:27 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/03/09 15:57:43 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include<iostream>
#include<string>
#include<stack>

int     ft_pars( std::string arg );
void    ft_exec_stk( std::string arg );
int     ft_cal(int va1, int va2, std::string op);

#endif