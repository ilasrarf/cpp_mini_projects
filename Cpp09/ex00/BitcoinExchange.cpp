/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:50:54 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/03/17 13:27:50 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

int ft_check_date(std::string s1, std::string s2, std::string s3)
{
    int i = 0;

    while (s1[i])
    {
        if (s1[i] < '0' || s1[i] > '9')
            return 0;
        i++;
    }
    i = 0;
    while (s2[i])
    {
        if (s2[i] < '0' || s2[i] > '9')
            return 0;
        i++;
    }
    i = 0;
    while (s3[i])
    {
        if (s3[i] < '0' || s3[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

int ft_rang_year( std::string line )
{
    size_t len = line.length();
    if (!ft_check_date(line.substr(5, 2), line.substr(0, 4), line.substr(8, 2)))
    {   
        std::cout << "Error: bad input => " << line << std::endl;
        return 0;
    }
    else if ( std::atoi( (line.substr(5, 2)).c_str() ) == 2 )
    {
        if ( (std::atoi( (line.substr(0, 4)).c_str()) % 4 ) != 0)
        {
            if(std::atoi( (line.substr(8, 2)).c_str() ) > 28 || std::atoi( (line.substr(8, 2)).c_str() ) < 1 )
            {
                std::cout << "Error: bad input => " << line << std::endl;
                return 0;
            }
        }
        else if( std::atoi( (line.substr(8, 2)).c_str() ) > 29 || std::atoi( (line.substr(8, 2)).c_str() ) < 1 )
        {
            std::cout << "Error: bad input => " << line << std::endl;
            return 0;
        }
    }
    else if (std::atoi( (line.substr(5, 2)).c_str() ) == 1 || std::atoi( (line.substr(5, 2)).c_str() ) == 3
        ||std::atoi( (line.substr(5, 2)).c_str() ) == 5||std::atoi( (line.substr(5, 2)).c_str() ) == 7
            ||std::atoi( (line.substr(5, 2)).c_str() ) == 8 || std::atoi( (line.substr(5, 2)).c_str() ) == 10 || std::atoi( (line.substr(5, 2)).c_str() ) == 12)
    {
        if(std::atoi( (line.substr(8, 2)).c_str() ) > 31 || std::atoi( (line.substr(8, 2)).c_str() ) < 1)
        {
                std::cout << "Error: bad input => " << line << std::endl;
                return 0;
        }
    }
    else if (std::atoi( (line.substr(5, 2)).c_str() ) == 4 || std::atoi( (line.substr(5, 2)).c_str() ) == 6
        || std::atoi( (line.substr(5, 2)).c_str() ) == 9 || std::atoi( (line.substr(5, 2)).c_str() ) == 11)
    {
         if(std::atoi( (line.substr(8, 2)).c_str() ) > 30 || std::atoi( (line.substr(8, 2)).c_str() ) < 1 )
        {
                std::cout << "Error: bad input => " << line << std::endl;
                return 0;
        }   
    }
    else if (std::atoi( (line.substr(5, 2)).c_str() ) > 12 || std::atoi( (line.substr(5, 2)).c_str() ) < 1)
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return 0;
    }
    
    if (strtod( (line.substr(13, len - 13) ).c_str() , NULL) < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return 0;
    }
    else if (strtod( (line.substr(13, len - 13) ).c_str(), NULL ) > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return 0;
    }
    return 1;
}

void ft_print_outt( std::string line, double price )
{
    size_t len = line.length();
    double gf = std::stod(line.substr(13, len - 13)) * price;
    std::cout << line.substr(0, 10) << " => " << line.substr(13, len - 13) << " = " << gf << std::endl;
}

BitcoinExchange::BitcoinExchange( std::ifstream& inputFile )
{
    std::string line;
    size_t len = line.length();
    std::getline(inputFile, line);

    while (std::getline(inputFile, line))
    {
        this->map_db[line.substr(0, 10)] = strtod(line.substr(11, len - 11).c_str(), NULL);
    }
}

int ft_check_val(std::string line)
{
    int dot = 0;
    int i = 0;
    while (line[i])
    {
        if (line[i] == '.')
            dot++;
        if (!(line[i] >= '0' && line[i] <= '9') && line[i] != '+' && line[i] != '-' && line[i] != '.')
            return 1;
        else if ((line[i] == '+' || line[i] == '-') && i > 0)
            return 1;
        else if ((line[i] == '+' || line[i] == '-') && !(line[i + 1] >= '0' && line[i + 1] <= '9') )
            return 1;
        else if (line[i] == '.' && !(line[i - 1] >= '0' && line[i - 1] <= '9'))
            return 1;
        i++;
    }
    if (dot > 1)
        return 1;
    return 0;
}

int ft_check_format( std::string line )
{
    if (line.length() >= 14)
    {
        if (!(line.substr(10, 3) == " | "))
        {
            std::cout << "Error: bad input => " << line << std::endl;
            return 0;
        }
        else if (!(line.substr(4, 1) == "-" && line.substr(7, 1) == "-"))
        {
            std::cout << "Error: bad input => " << line << std::endl;
            return 0;
        }
        else if (ft_check_val(line.substr(13, line.length() - 13)))
        {
            std::cout << "Error: bad input => " << line << std::endl;
            return 0;
        }
        else if (!ft_rang_year(line) )
            return 0;
    }
    else
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return 0;
    }
    return 1;
}

void ft_exec( std::string line, BitcoinExchange *obj)
{
    std::map<std::string, double>::iterator itfind = obj->map_db.find(line.substr(0, 10));

    if (itfind != obj->map_db.end())
        ft_print_outt(line, itfind->second);
    else
    {
        itfind = obj->map_db.lower_bound(line);
        if (itfind != obj->map_db.begin())
        {
            itfind--;
            ft_print_outt(line, itfind->second);
        }
        else
            std::cout << "Error: no data about this date" << std::endl;
    }
}

int ft_prs_input( std::ifstream& inputFile,  BitcoinExchange *obj)
{
    std::string line;

    std::getline(inputFile, line);
    if (line != "date | value")
        return (1);
    while (std::getline(inputFile, line))
    {
        if (ft_check_format(line))
            ft_exec(line, obj);
    }
    return (0);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
    *this = copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
    if (this != &obj)
        this->map_db = obj.map_db;
    return (*this);
}

BitcoinExchange::~BitcoinExchange()
{}