/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:37:33 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/01/25 15:16:35 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat obj(500);
    std::cout << obj << std::endl;
    obj.decrement();
    std::cout << obj << std::endl;
    obj.increment();
    std::cout << obj << std::endl;
}