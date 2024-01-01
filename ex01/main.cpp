/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:03:52 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/01 19:34:24 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main() 
{
    Span sp = Span(4);
    std :: vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
   // a.push_back(5);
    // int n = 4;
    try
    {

        sp.addRange(a.begin() , a.end());
        for(int i = 0 ; i < 10000 ;i++)
        {
            sp.addNumber(i);
        
            //n+=i;
        }
        
         //sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
        // sp.addNumber(12);
        std::cout << sp.shortestSpan() << std::endl;
         std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
   
    return 0;
}