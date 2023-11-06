/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:25:24 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/10/30 16:53:38 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string Contact::get_phonenumber()
{
    return (phonenumber);
}

std::string Contact::get_firstname()
{
    return (firstname);
}

std::string Contact::get_lastname()
{
    return (lastname);
}

std::string Contact::get_nikename()
{
    return (nikename);
}
std::string Contact::get_darkestsecret()
{
    return (darkestsecret);
}
/*----------------------------------------------------------------------*/

void Contact::set_phonenumber(std::string nbr)
{
    phonenumber = nbr;
}

void Contact::set_firstname(std::string first)
{
    firstname = first;
}

void Contact::set_lastname(std::string last)
{
    lastname = last;
}

void Contact::set_nikename(std::string nike)
{
    nikename = nike;
}

void Contact::set_darkestsecret(std::string dark)
{
    darkestsecret = dark;
}
