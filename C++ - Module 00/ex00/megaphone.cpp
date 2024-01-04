/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:54:18 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/10/22 15:54:31 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void ft_waup(char *av)
{
    std::string str = av;
    for(size_t i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
    std::cout << str;
}

int main(int ac, char **av)
{
    int i = 1;
    
    if (ac <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (av[i])
    {
        ft_waup(av[i]);
        i++;
    }
    std::cout << std::endl;
    return (0);
}