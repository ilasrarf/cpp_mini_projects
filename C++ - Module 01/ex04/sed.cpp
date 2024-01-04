/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:26:52 by ilasrarf          #+#    #+#             */
/*   Updated: 2023/12/20 21:44:09 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string ft_replace(std::string str, std::string s1, std::string s2)
{
	size_t 			pos = 0;

	pos = str.find(s1);
	while (pos != str.npos)
	{
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos = str.find(s1, pos + s2.length());
	}
	return (str);
}

void    rep_func(char **av)
{
	std::string tmp;
	std::string tmpf;
	std::string ifile = std::string(av[1]);
	std::string ofile = std::string(av[1]) + ".replace";

	std::ifstream inp_obj_file(ifile);

	if (!inp_obj_file.is_open())
	{
		std::cerr << "ERROR input file" << std::endl;
		return ;
	}

	std::ofstream out_file_file(ofile);

	if (!out_file_file.is_open())
	{
		std::cerr << "ERROR output file" << std::endl;
		inp_obj_file.close();
		return ;
	}
	while (std::getline(inp_obj_file, tmp))
	{
		tmpf.append(tmp);
		if (!inp_obj_file.eof())
            tmpf.push_back('\n');
	}
	tmpf = ft_replace(tmpf, std::string(av[2]), std::string(av[3]));
	out_file_file << tmpf;
	inp_obj_file.close();
	out_file_file.close();
}
