/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:59:37 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/11/04 13:40:32 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact con[8];
public:
	void	set_name( int , std::string );
	void	set_last( int , std::string );
	void	set_phone( int , std::string );
	void	set_nikename( int , std::string );
	void	set_dark( int , std::string );
	void	handel_add();
	void	handel_search();
	void	get_fld( int );
	int		check_contact( int );
	int		len_con();
};

void	ft_comrule( PhoneBook );
int		is_empty( std::string );
#endif