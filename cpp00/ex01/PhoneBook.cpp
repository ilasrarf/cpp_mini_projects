/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:00:09 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/10/24 14:24:11 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.hpp"

int main()
{
    Contact obj;

    obj.set_phonenumber(123123);

    std::cout << obj.get_phonenumber() << std::endl;
    return 0;
}
