/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:59:37 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/10/25 03:42:44 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HEAD_HPP
#define HEAD_HPP

#include <iostream>

class Contact
{
private:
	int phonenumber;
	std::string firstname;
	std::string lastname;
	std::string nikename;
	std::string darkestsecret;
public:
	int get_phonenumber();
	std::string get_firstname();
	std::string get_lastname();
	std::string get_nikename();
	std::string get_darkestsecret();
public:
	void set_phonenumber(int phonenumber);
	void set_firstname(std::string firstname);
	void set_lastname(std::string lastname);
	void set_nikename(std::string nikename);
	void set_darkestsecret(std::string darkestsecret);
};

class PhoneBook
{
private:
	Contact con[8];
public:
	void get_contacts();
public:
	void set_contacts();
};


#endif