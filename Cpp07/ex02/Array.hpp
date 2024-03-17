/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:35:45 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/08 13:43:39 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

template <typename T> class Array
{
    private:
        unsigned int N;
        T *arr;
    public:
        Array();
        Array( unsigned int );
        ~Array();
        Array( const Array& );
        Array& operator=( const Array& );
        T& operator[]( unsigned int );
        size_t size() const;
};

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

template <typename T> Array<T>& Array<T>::operator=(const Array& obj) const
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

template <typename T> T& Array<T>::operator[]( unsigned int i ) const
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

#endif