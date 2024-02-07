/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:36:34 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/07 14:43:02 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T> Array<T>::Array()
{
    this->arr = new T[0];
}

template <typename T> Array<T>::Array( unsigned int _N ) : N(_N)
{
    this->arr = new T[this->N];
}

template <typename T> Array<T>::~Array()
{
    delete[] this->arr;
}

template <typename T> Array<T>::Array(const Array& obj) : N(obj.N)
{
    this->arr = new T[obj.N];

    for (size_t i = 0; i < obj.N; i++)
        this->arr[i] = obj.arr[i];
}

template <typename T> Array<T>& Array<T>::operator=(const Array& obj)
{
    if (this != &obj)
    {
        delete[] this->arr;
        this->N = obj.N;
        if (obj.N > 0)
            this->arr = new T[obj.N];
        else
            this->arr = NULL;

        for (size_t i = 0; i < obj.N; i++)
            this->arr[i] = obj.arr[i];
    }
    return (*this);
}

template <typename T> T& Array<T>::operator[]( unsigned int i )
{
    if (i < N)
        return arr[i];
    throw (std::out_of_range("the index is out of rang"));
}

template <typename T> size_t Array<T>::size() const
{
    int i = 0;
    while (this->arr[i])
        i++;
    return (i);
}

int main ()
{
    Array<int> obj(5);
    Array<int> obj1(12);

    try
    {
        obj[0] = 0;
        obj[1] = 1;
        obj[2] = 2;
        obj[3] = 3;
        obj[4] = 4;
        obj[-2] = 12;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    for(int i = 0; i < 5; i++)
        std::cout << obj[i] << std::endl;

    obj1 = obj;
    std::cout << "------------\n";
    try
    {
        obj1[0] = 42;
        obj1[1] = 1337;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    for(int i = 0; i < 5; i++)
        std::cout << obj1[i] << std::endl;
}
