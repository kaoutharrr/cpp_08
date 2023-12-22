/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:19:49 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/21 23:46:04 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP


#include<iostream>
 
template<typename T>

int easyfind(T& myContainer, int a)
{

    typename T :: iterator iter;
    iter = std :: find(myContainer.begin(), myContainer.end(), a);
    if(iter == myContainer.end)
        throw(std :: runtime_error("value not found"));
    return(*iter);
}










#endif