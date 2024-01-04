/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:53:44 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/12/20 20:47:01 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string level;
    Harl obj;

    std::getline(std::cin, level);
    if (std::cin.eof())
        exit(0);
    obj.complain(level);
}