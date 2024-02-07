/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:29:34 by ilasrarf          #+#    #+#             */
/*   Updated: 2024/02/04 20:29:58 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() 
{}

Base * generate(void)
{
    std::srand(std::time(0));

    int gen = std::rand() % 3;

    if (gen == 0)
        return new A;
    else if (gen == 1)
        return new B;
    else
        return new C;
    return (NULL);
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "the actual type of the object pointed to by base class is : A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "the actual type of the object pointed to by base class is : B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "the actual type of the object pointed to by base class is : C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& o = dynamic_cast<A&>(p);
        (void)o;
        std::cout << "the actual type of the object pointed to by base class is : A" << std::endl;
    }
    catch( ... )
    {
        try
        {
            B& o = dynamic_cast<B&>(p);
            (void)o;
            std::cout << "the actual type of the object pointed to by base class is : B" << std::endl;
        }
        catch( ... )
        {
            try
            {
                C& o = dynamic_cast<C&>(p);
                (void)o;
                std::cout << "the actual type of the object pointed to by base class is : C" << std::endl;
            }
            catch( ... )
            {
                std::cout << "??" << std::endl;
            }
        }
    }
}

int main()
{

    std::cout << "\033[1;31m ####### Test 1 : #######" << std::endl;

    Base *p = new C();

    identify(p);
    identify(*p);
    
    std::cout << "\033[1;32m ####### Test 2 : #######" << std::endl;
    
    Base *p1 = new A();

    identify(p1);
    identify(*p1);
    
    std::cout << "\033[1;33m ####### Test 2 : #######" << std::endl;
    
    Base *p2 = new B();

    identify(p2);
    identify(*p2);
}