/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:51:26 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/03/14 12:34:51 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "error !!\n";  
        return (0);
    }
    std::ifstream inputFile(av[1]);
    std::ifstream dataFile("data.csv");

    try
    {
        if (!dataFile.is_open())
            throw(std::invalid_argument("file can't open :("));
        else if (!inputFile.is_open())
        {
            dataFile.close();
            throw(std::invalid_argument("file can't open :("));
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    BitcoinExchange obj(dataFile);

    if (ft_prs_input(inputFile, &obj))
    {
        inputFile.close();
        dataFile.close();
        std::cout << "Error : file format !" << std::endl;
    }
    

    inputFile.close();
    dataFile.close();
}
