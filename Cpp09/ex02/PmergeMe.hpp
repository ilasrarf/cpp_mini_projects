/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:54:53 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/03/17 14:12:26 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include<iostream>
#include<string>
#include<vector>
#include<deque>


class PmergeMe {
    public:
        std::vector<std::pair<int, int> > vec_p;
        std::deque<std::pair<int, int> > vec_p_deq;
        std::vector<int> vec;
        std::vector<int> vec_f;
        std::deque<int> vec_deq;
        int last_nb;
        int ld;
        double rus_vec;
        double rus_deq;
        PmergeMe();
        PmergeMe(char **av);
        ~PmergeMe();
        PmergeMe(const PmergeMe& copy);
        PmergeMe& operator=(const PmergeMe& obj);
};

int     ft_pars_arg(char **av);

void    ft_alg_vec(PmergeMe& obj);
void    ft_alg_deq( PmergeMe& obj );

void    ft_make_pairs_deq( PmergeMe& obj );
void    ft_make_pairs( PmergeMe& obj );

void    ft_gen_num(size_t size, std::vector<size_t>& num);
void    ft_gen_num_deq(size_t size, std::deque<size_t>& num);

void    ft_marge_sort(std::vector<std::pair<int, int> >& vec, size_t bg,  size_t end);
void    ft_marge_sort_deq(std::deque<std::pair<int, int> >& vec, size_t bg,  size_t end);

void    ft_jacob_vec(std::vector<int>& vec_f, std::vector<std::pair<int, int> >& vec, std::vector<size_t>& num, int last, int ld);
void    ft_jacob_vec_deq(std::deque<std::pair<int, int> >& vec, std::deque<size_t>& num, int last, int ld);
#endif