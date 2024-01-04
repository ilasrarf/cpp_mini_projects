/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:33:14 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/12/20 21:46:05 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av)
{
    if (ac == 4)
    {
        if (av[2][0])
            rep_func(av);
        else
            std::cerr << "ERROR" << std::endl;   
            
    }
    else
        std::cerr << "ERROR" << std::endl;
    return 0;
}