/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:43:59 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/21 23:12:49 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

Span :: Span()
{
    _N = 0;
}

Span :: Span(unsigned int N)
{
    _N = N;
}

Span :: Span(const Span& other)
{
   *this = other;
}

Span& Span ::  operator=(const Span& other)
{
    if(this!=&other)
    {
        _N = other._N;
        myVector = other.myVector;
    }
    return(*this);
}

void Span :: addNumber(int number)
{
    if(myVector.size() < _N)
    {
        myVector.push_back(number);
    }
    else
    {
        throw(std :: logic_error("vector full !"));
    }
}


int Span :: shortestSpan()
{
    int span = 10;
    int prev;

    if(myVector.size() < 2)
        throw(std :: logic_error("size is smaller than 2"));
    std :: vector<int> tmp = myVector;
    std ::sort(tmp.begin(), tmp.end(), std :: greater<int>()); 
   
  std ::vector<int> :: iterator ptr;
    for( ptr = tmp.begin(); ptr != tmp.end(); ptr++)
    {
        if(ptr == tmp.begin())
            prev = *(tmp.begin());
        else
        {
            if(span > prev - *ptr)
                span = prev - *ptr;
            prev = *ptr;
        }
    }
    return(span);
}
int Span :: longestSpan()
{
    if(myVector.size() < 2)
        throw(std :: logic_error("size is smaller than 2"));
    std :: vector <int>  :: iterator maxIter = std :: max_element(myVector.begin(), myVector.end());
    std :: vector <int>  :: iterator minIter = std :: min_element(myVector.begin(), myVector.end());
    int span = *maxIter - *minIter;
    return span;
}

Span :: ~Span()
{
    
}