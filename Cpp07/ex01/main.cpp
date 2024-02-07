/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:50:46 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/07 19:17:02 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void func(T& x)
{
    std::cout << x << std::endl;
}

int main()
{
    int a[] = {1,2,3,4,5,6};
    iter(a, 6, func<int>);

    std::cout <<  "---------------------\n";

    std::string arr1[] = {"1111111", "2222222", "3333333"};
    iter(arr1, 3, func<std::string>);
}
