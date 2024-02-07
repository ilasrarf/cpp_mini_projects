/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:43:35 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/04 21:52:28 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"

void ScalarConverter::convert( std::string str )
{
    size_t fnd1 = str.find("f");
    float       fl = 0;
    double      dl = 0;
    int         nb = 0;
    
    if (str.length() == 1 && (str[0] < '0' || str[0] > '9'))
    {
        std::cout << "char: " << static_cast<char>(str[0]) << std::endl;
        std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
        std::cout << "doubel: " << static_cast<double>(str[0]) << ".0" << std::endl;
        return ;
    }
    else
    {
        if (fnd1 != std::string::npos)
            str.erase(str.end() - 1);
        std::istringstream(str) >> fl;
        std::istringstream(str) >> dl;
        std::istringstream(str) >> nb;
        fl = static_cast<float>(fl);
        dl = static_cast<double>(dl);
        nb = static_cast<int>(nb);
        if (nb >= 32 && nb <= 126)
            std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << nb << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << fl << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << dl << std::endl;
    }
}


void ft_pars(char *av)
{
    int dot = 0;
    std::string str = av;
    if (str == "-inf" || str == "+inf" || str == "-inff" || str == "+inff")
    {
        std::cout << "char: " << str << "\n";
        std::cout << "int: " << str << "\n";
        std::cout << "float: " << str << "\n";
        std::cout << "doubel: " << str << "\n";
    }
    else if (str == "nan")
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: " << str << "f" <<"\n";
        std::cout << "doubel: " << str << "\n";
    }
    else if (str.length() > 1)
    {
        for (size_t i = 0; i < str.length(); i++)
        {
            if (i == 0 && str[i] != '-' && str[i] != '+' && (str[i] < '0' || str[i] > '9'))
            {
                std::cout << "Bad argument :/" << std::endl;
                return ;
            }
            else if (str[i] != 'f' && !(str[i] >= '0' && str[i] <= '9') && str[i] != '.' && str[i] != '+' && str[i] != '-' )
            {
                std::cout << "Bad argument :/" << std::endl;
                return ;
            }
            else if (str[i] == 'f' && str[i + 1] != '\0')
            {
                std::cout << "Bad argument :/" << std::endl;
                return ;
            }
            if (str[i] == '.')
                dot++;
        }
    }
    if (dot > 1)
    {
        std::cout << "Bad argument :/" << std::endl;
        return ;
    }
    ScalarConverter::convert(str);
}

int main(int ac, char **av)
{
    std::cout << "\033[0;92m";
    if (ac == 2)
        ft_pars(av[1]);
    else
        std::cout << "you mast to enter only one argument :/" << std::endl;
    return (0);
}
