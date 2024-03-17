/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:53:07 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/03/16 15:18:52 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char **av)
{
    if ( ac <= 2 )
    {
        std::cout << "invalid args !!" << std::endl;
        return 0;
    } 
    if (!ft_pars_arg(av))
        return 0;

    PmergeMe  obj(av);

    ft_make_pairs(obj);
    ft_make_pairs_deq(obj);

    std::cout << "\nTime to process a range of "
              << ac - 1 << " elements with std::vector : " << obj.rus_vec << " us" << std::endl;
    std::cout << "Time to process a range of "
              << ac - 1 << " elements with std::deque : " << obj.rus_deq << " us" << std::endl;
}
