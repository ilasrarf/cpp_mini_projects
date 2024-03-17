/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:26:42 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/03/16 21:54:47 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int ft_pars( std::string arg )
{
    for (size_t i = 0; i < arg.length() - 1; i++)
    {
        if (arg[i] != ' ' && arg[i + 1] != ' ')
        {
            std::cout << "ERROR\n";
            return 0;
        }
        else if (arg[i] != ' ' && (arg[i] < '0' ||  arg[i] > '9') && arg[i] != '*'
                &&  arg[i] != '/' && arg[i] != '-' && arg[i] != '+')
        {
            std::cout << "ERROR\n";
            return 0;
        }
    }
    return 1;
}

int ft_cal(int va1, int va2, std::string op)
{
    if (op == "/")
        return va1 / va2;
    if (op == "*")
        return va1 * va2;
    if (op == "-")
        return va1 - va2;
    return va1 + va2;
}

void ft_exec_stk( std::string arg )
{
    std::stack<int> stk;
    size_t len = arg.length();
    int va1 = 0;
    int va2 = 0;

    for (size_t i = 0; i < len; i++)
    {
        if (arg[i] >= '0' && arg[i] <= '9')
            stk.push( std::stoi(arg.substr(i, 1)));
        else if (arg[i] == '/' || arg[i] == '-' || arg[i] == '*' || arg[i] == '+')
        {
            if (stk.size() >= 2)
            {
                va1 = stk.top();
                stk.pop();
                va2 = stk.top();
                stk.pop();
                if( va1 == 0 && arg.substr(i, 1) == "/")
                {
                    std::cout << "ERROR !\n";
                    return ;
                }
                stk.push(ft_cal(va2, va1, arg.substr(i, 1)));
            }
            else
            {  
                std::cout << "ERROR !\n";
                return ;
            }
        }
    }
    if (stk.size() == 1)
        std::cout << stk.top();
    else
        std::cout << "ERROR !\n";
}
