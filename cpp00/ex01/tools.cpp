/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:34:29 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/10/30 11:35:14 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int is_empty(std::string str)
{
    int i = 0;
    int cnt = 0;

    if (!str[0])
        return (1);
    while (str[i])
    {
        if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
            cnt++;
        i++;
    }
    return (cnt);
}

void	ft_comrule(PhoneBook objp)
{
    std::string rule = "";
    std::cout << "you have thre optins"  << std::endl << "1. ADD" << std::endl << "2. SEARCH" << std::endl << "3. EXIT" << std::endl;
    while (1)
    {
        std::cout << "---> ";
        std::getline(std::cin, rule);
        if (std::cin.eof())
            exit(0);
        if ("ADD" == rule)
            objp.handel_add();
        else if ("SEARCH" == rule)
            objp.handel_search();
        else if ("EXIT" == rule)
            exit(0);
        else
            std::cout << "rule not found : " << rule << std::endl;
    }
}

int main()
{
    PhoneBook objp;
    ft_comrule(objp);
}