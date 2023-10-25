/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:00:09 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/10/25 03:51:01 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.hpp"

int main()
{
    Contact obj;

    obj.set_phonenumber(123123);
    obj.set_firstname("ilyass");
    obj.set_lastname("asrarfi");
    obj.set_nikename("Kuroko");
    obj.set_darkestsecret("test123");

    std::cout << obj.get_phonenumber() << std::endl;
    std::cout << obj.get_firstname() << std::endl;
    std::cout << obj.get_lastname() << std::endl;
    std::cout << obj.get_nikename() << std::endl;
    std::cout << obj.get_darkestsecret() << std::endl;
    return 0;
}
