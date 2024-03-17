/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:50:42 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/03/14 14:28:37 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>

class BitcoinExchange
{
    public:
        std::map<std::string, double> map_db;
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange( const BitcoinExchange& copy );
        BitcoinExchange( std::ifstream& inputFile );
        BitcoinExchange& operator=( const BitcoinExchange& obj );

        
};

int ft_prs_input( std::ifstream& inpt, BitcoinExchange *obj);
int ft_check_str(std::string line);

#endif