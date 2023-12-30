/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 19:05:39 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/30 13:35:01 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include<stack>
#include<iostream>
#include <iterator>

template<typename T>

class MutantStack : public std :: stack<T>
{
    public:
        MutantStack(){};
        MutantStack(const MutantStack& other)
        {
            *this = other;
        }
        MutantStack& operator=(const MutantStack& other)
        {
            (void)other;
            return(*this);
        }
        ~MutantStack(){}
        typedef typename MutantStack<T>  :: stack :: container_type :: iterator iterator;
        iterator begin(void)
        {
            return(this->c.begin());
        }
        iterator end(void)
        {
            return(this->c.end());
        }

};





#endif