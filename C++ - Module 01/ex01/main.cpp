/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:40:04 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/12/06 18:18:53 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
     int N = 7;
     Zombie *obj = zombieHorde(N, "test");

     for (int i = 0; i < N; i++)
     {
          std::cout << "obj" << i + 1 << ": ";
          obj[i].announce();
     }
   delete[] obj;
}