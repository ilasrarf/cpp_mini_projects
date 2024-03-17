/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:53:46 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/03/17 14:12:34 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(char **av)
{
    int i = 1;
    this->ld = 0;
    
    while (av[i])
    {
        this->vec.push_back(std::atoi(av[i]));
        i++;
    }
    i = 1;
    while (av[i])
    {
        this->vec_deq.push_back(std::atoi(av[i]));
        i++;
    }
}

PmergeMe::~PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe& copy) {
    *this = copy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& obj) {
    if (this != &obj) {
        this->vec_p = obj.vec_p;
        this->vec_p_deq = obj.vec_p_deq;
        this->vec = obj.vec;
        this->vec_f = obj.vec_f;
        this->vec_deq = obj.vec_deq;
        this->last_nb = obj.last_nb;
        this->ld = obj.ld;
        this->rus_vec = obj.rus_vec;
        this->rus_deq = obj.rus_deq;
    }
    return (*this);
}

int ft_pars_arg(char **av)
{
    int i = 1, j = 0;

    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            if(av[i][j] == '-' || av[i][j] == '+')
            {
                if ((av[i][j + 1] < '0' || av[i][j + 1] > '9')) 
                {
                    std::cout << "error !" << std::endl;
                    return 0;
                }
            }
            else if ((av[i][j] < '0' || av[i][j] > '9'))
            {
                std::cout << "error !" << std::endl;
                return 0;
            }
            j++;
        }
        i++;
    }
    return 1;
}


void ft_make_pairs( PmergeMe& obj )
{
    size_t len_of_vec = obj.vec.size();
    size_t i = 0, j = 0;
    
    if (len_of_vec % 2 == 1)
    {
        obj.last_nb = obj.vec[len_of_vec - 1];
        obj.ld = 1;
    }
    while (i < len_of_vec / 2)
    {
        if (obj.vec[j] > obj.vec[j + 1])
            obj.vec_p.push_back(std::make_pair(obj.vec[j], obj.vec[j + 1]));
        else
            obj.vec_p.push_back(std::make_pair(obj.vec[j + 1], obj.vec[j]));
        j+=2;
        i++;
    }
    std::vector<int>::iterator it;
    std::cout << "Before: ";
    for(it = obj.vec.begin(); it < obj.vec.end(); it++)
        std::cout << *it << " ";
    std::clock_t c_start = std::clock();
    ft_alg_vec(obj);
    obj.rus_vec = static_cast<double>(std::clock() - c_start) / CLOCKS_PER_SEC * 1000000;
}

void ft_make_pairs_deq( PmergeMe& obj )
{
    size_t len_of_vec = obj.vec_deq.size();
    size_t i = 0, j = 0;
    
    if (len_of_vec % 2 == 1)
    {
        obj.last_nb = obj.vec_deq[len_of_vec - 1];
        obj.ld = 1;
    }
    

    while (i < len_of_vec / 2)
    {
        if (obj.vec_deq[j] > obj.vec_deq[j + 1])
            obj.vec_p_deq.push_back(std::make_pair(obj.vec[j], obj.vec[j + 1]));
        else
            obj.vec_p_deq.push_back(std::make_pair(obj.vec[j + 1], obj.vec[j]));
        j+=2;
        i++;
    }
    std::clock_t c_start = std::clock();
    ft_alg_deq(obj);
    obj.rus_deq = static_cast<double>(std::clock() - c_start) / CLOCKS_PER_SEC * 1000000;
    std::cout << "\nAfter: ";
    std::vector<int>::iterator it1;
    for(it1 = obj.vec_f.begin(); it1 < obj.vec_f.end(); it1++)
        std::cout << *it1 << " ";
}

void ft_alg_vec( PmergeMe& obj )
{
    std::vector<int>::iterator it1;
    ft_marge_sort(obj.vec_p, 0, obj.vec_p.size() - 1);
    
    std::vector<size_t> num;
    ft_gen_num(obj.vec_p.size(), num);
    ft_jacob_vec(obj.vec_f, obj.vec_p, num, obj.last_nb, obj.ld);
}

void ft_alg_deq( PmergeMe& obj )
{
    std::deque<int>::iterator it1;
    ft_marge_sort_deq(obj.vec_p_deq, 0, obj.vec_p_deq.size() - 1);
    
    std::deque<size_t> num;
    ft_gen_num_deq(obj.vec_p_deq.size(), num);
    ft_jacob_vec_deq(obj.vec_p_deq, num, obj.last_nb, obj.ld);
}

/* ---- ------- ----- ------ ------ ------ ------ ------- ------- -------*/

void    ft_jacob_vec(std::vector<int>& vec_f, std::vector<std::pair<int, int> >& vec, std::vector<size_t>& num, int last, int ld)
{
    size_t pre = 0;
    
    std::vector<int> vec1(vec.size());
    std::vector<int> vec2(vec.size());
    std::vector<int>::iterator it;

    for(size_t i = 0; i < vec.size(); i++)
        vec1[i] = vec[i].first;
    for(size_t i = 0; i < vec.size(); i++)
        vec2[i] = vec[i].second;

    vec1.insert(vec1.begin(), vec2[0]);
    for (size_t i = 3; i < num.size(); i++)
    {
        it = std::lower_bound(vec1.begin(), vec1.end(), vec2[num[i] - 1]);
        vec1.insert(it, vec2[num[i] - 1]);
        for (size_t z = num[i] - 2; z > pre; z--)
        {
            it = std::lower_bound(vec1.begin(), vec1.end(), vec2[z]);
            vec1.insert(it, vec2[z]);
        }
        pre = num[i] - 1;
    }
    if (ld == 1)
    {
        it = std::lower_bound(vec1.begin(), vec1.end(), last);
        vec1.insert(it, last);
    }
    vec_f = vec1;
}

void    ft_jacob_vec_deq(std::deque<std::pair<int, int> >& vec, std::deque<size_t>& num, int last, int ld)
{
    size_t pre = 0;
    
    std::deque<int> vec1(vec.size());
    std::deque<int> vec2(vec.size());
    std::deque<int>::iterator it;

    for(size_t i = 0; i < vec.size(); i++)
        vec1[i] = vec[i].first;
    for(size_t i = 0; i < vec.size(); i++)
        vec2[i] = vec[i].second;

    vec1.insert(vec1.begin(), vec2[0]);
    for (size_t i = 3; i < num.size(); i++)
    {
        it = std::lower_bound(vec1.begin(), vec1.end(), vec2[num[i] - 1]);
        vec1.insert(it, vec2[num[i] - 1]);
        for (size_t z = num[i] - 2; z > pre; z--)
        {
            it = std::lower_bound(vec1.begin(), vec1.end(), vec2[z]);
            vec1.insert(it, vec2[z]);
        }
        pre = num[i] - 1;
    }
    if (ld == 1)
    {
        it = std::lower_bound(vec1.begin(), vec1.end(), last);
        vec1.insert(it, last);
    }
}
/* ---- ------- ----- ------ ------ ------ ------ ------- ------- -------*/

void    ft_marge_sort(std::vector<std::pair<int, int> >& vec, size_t bg,  size_t end)
{
    if (bg < end)
    {  
        size_t mid = (bg + end) / 2;
        
        ft_marge_sort(vec, bg, mid);
        ft_marge_sort(vec, mid + 1, end);

        size_t s1 = mid - bg + 1;
        size_t s2 = end - mid;

        std::vector<std::pair<int, int> > vec1(s1);
        std::vector<std::pair<int, int> > vec2(s2);
    
        for (size_t i = 0; i < s1; i++)
            vec1[i] = vec[bg + i];
        for (size_t j = 0; j < s2; j++)
            vec2[j] = vec[mid + 1 + j];
    
        size_t i = 0, j = 0, k = bg;
    
        while (i < s1 && j < s2) {
            if (vec1[i].first <= vec2[j].first) {
                vec[k] = vec1[i];
                i++;
            } else {
                vec[k] = vec2[j];
                j++;
            }
            k++;
        }
        while (i < s1)
        {
            vec[k] = vec1[i];
            i++;
            k++;
        }
        while (j < s2)
        {
            vec[k] = vec2[j];
            j++;
            k++;
        }
    }
}

void    ft_marge_sort_deq(std::deque<std::pair<int, int> >& vec, size_t bg,  size_t end)
{
    if (bg < end)
    {  
        size_t mid = (bg + end) / 2;
        
        ft_marge_sort_deq(vec, bg, mid);
        ft_marge_sort_deq(vec, mid + 1, end);

        size_t s1 = mid - bg + 1;
        size_t s2 = end - mid;

        std::deque<std::pair<int, int> > vec1(s1);
        std::deque<std::pair<int, int> > vec2(s2);
    
        for (size_t i = 0; i < s1; i++)
            vec1[i] = vec[bg + i];
        for (size_t j = 0; j < s2; j++)
            vec2[j] = vec[mid + 1 + j];
    
        size_t i = 0, j = 0, k = bg;
    
        while (i < s1 && j < s2) {
            if (vec1[i].first <= vec2[j].first) {
                vec[k] = vec1[i];
                i++;
            } else {
                vec[k] = vec2[j];
                j++;
            }
            k++;
        }
        while (i < s1)
        {
            vec[k] = vec1[i];
            i++;
            k++;
        }
        while (j < s2)
        {
            vec[k] = vec2[j];
            j++;
            k++;
        }
    }
}

/* ---- ------- ----- ------ ------ ------ ------ ------- ------- -------*/

void ft_gen_num(size_t size, std::vector<size_t>& num)
{
    num.push_back(0);
    num.push_back(1);

    size_t i = 2;
    while ( 1 )
    {
        if (num[i - 1] + (2 * num[i - 2]) >= size)
        {
            num.push_back(size);
            break ;
        }
        else
            num.push_back(num[i - 1] + (2 * num[i - 2]));  
        i++;
    }
}
void ft_gen_num_deq(size_t size, std::deque<size_t>& num)
{
    num.push_back(0);
    num.push_back(1);

    size_t i = 2;
    while ( 1 )
    {
        if (num[i - 1] + (2 * num[i - 2]) >= size)
        {
            num.push_back(size);
            break ;
        }
        else
            num.push_back(num[i - 1] + (2 * num[i - 2]));  
        i++;
    }
}
