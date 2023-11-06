/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:00:09 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/11/04 13:43:09 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int		PhoneBook::len_con()
{
    int i = 0;

    while (con[i].get_firstname() != "")
        i++;
    return (i);
}

int		PhoneBook::check_contact(int b)
{
    int i = 0;

    while (con[i].get_firstname() != "")
        i++;
    if (b > i)
        return (1);
    return (0);
}

void	PhoneBook::set_name(int indx, std::string str)
{
    int i = 0;
    std::cout << "enter your first name" << std::endl;
    while (i == 0)
    {
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
        if (!is_empty(str))
        {
            con[indx].set_firstname(str);
            i++;
        }
        else
            std::cout << "!!invalid!! set the first name agine" << std::endl;
    }
}

void	PhoneBook::set_last(int indx, std::string str)
{
    int i = 0;
    std::cout << "enter your last name" << std::endl;
    while (i == 0)
    {
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
        if (!is_empty(str))
        {
            con[indx].set_lastname(str);
            i++;
        }
        else
            std::cout << "!!invalid!! set the last name agine" << std::endl;
    }
}
void	PhoneBook::set_nikename(int indx, std::string str)
{
    int i = 0;
    std::cout << "enter your nickname" << std::endl;
    while (i == 0)
    {
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
        if (!is_empty(str))
        {
            con[indx].set_nikename(str);
            i++;
        }
        else
            std::cout << "!!invalid!! set the nikename agine" << std::endl;
    }
}
void	PhoneBook::set_phone(int indx, std::string str)
{
    int i = 0;
    std::cout << "enter your phone number" << std::endl;
    while (i == 0)
    {
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
        if (!is_empty(str))
        {
            con[indx].set_phonenumber(str);
            i++;
        }
        else
            std::cout << "!!invalid!! set the phone number agine" << std::endl;
    }
}
void	PhoneBook::set_dark(int indx, std::string str)
{
    int i = 0;
    std::cout << "enter your darkest secret" << std::endl;
    while (i == 0)
    {
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
        if (!is_empty(str))
        {
            con[indx].set_darkestsecret(str);
            i++;
        }
        else
            std::cout << "!!invalid!! set the darkest secret agine" << std::endl;
    }
}

void	PhoneBook::handel_add()
{
    std::string str = "";
    static int i = 0;
    set_name(i, str);
    set_last(i, str);
    set_nikename(i, str);
    set_phone(i, str);
    set_dark(i, str);
    if (i == 7)
        i = 0;
    else
        i++;
}

void	PhoneBook::handel_search()
{
    int i = 1;
    int j = 0;
    std::string str = "";
    if (!len_con())
    {
        std::cout << "add contacts first !!\n";
        return ;
    }
    while (con[j].get_firstname() != "")
    {
        std::cout << std::setw(10) << i << "|";
        if (con[j].get_firstname().length() >= 10)
            std::cout << std::setw(10) << con[j].get_firstname().substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << con[j].get_firstname() << "|";
        if (con[j].get_lastname().length() >= 10)
            std::cout << std::setw(10) << con[j].get_lastname().substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << con[j].get_lastname() << "|";
        if (con[j].get_nikename().length() >= 10)
            std::cout << std::setw(10) << con[j].get_nikename().substr(0, 9) + "." << "|" << std::endl;
        else    
            std::cout << std::setw(10) << con[j].get_nikename() << "|" << std::endl;
        i++;
        j++;
    }
    std::cout << "enter the number of the contact for more info" << std::endl;
    while (1)
    {
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
        if (str.length() > 1 || !(str >= "1" && str <= "8"))
            std::cout << "set a valid index {1 --- 8}" << std::endl;
        else if (check_contact(str[0] - 48))
            std::cout << "!!not exist!!" << std::endl;
        else
        {
            get_fld(str[0] - 48);
            return ;
        }
    }
}

void	PhoneBook::get_fld(int index)
{
    std::cout << "index :  " << index << std::endl;
    std::cout << "first name :  " << con[index - 1].get_firstname() << std::endl;
    std::cout << "last name :  " << con[index - 1].get_lastname() << std::endl;
    std::cout << "nikename :  " << con[index - 1].get_nikename() << std::endl;
    std::cout << "phone number :  " << con[index - 1].get_phonenumber() << std::endl;
    std::cout << "darkest secret :  " << con[index - 1].get_darkestsecret() << std::endl;
}
