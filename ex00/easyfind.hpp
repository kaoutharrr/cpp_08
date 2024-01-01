/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:19:49 by kkouaz            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/01/01 19:33:41 by kkouaz           ###   ########.fr       */
=======
/*   Updated: 2024/01/01 19:23:24 by kkouaz           ###   ########.fr       */
>>>>>>> 9447066b440af8c8358fd1bf15ada2b1a1aee6db
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<algorithm>
#include<iostream>

template<typename T>

typename T :: iterator easyfind(T& myContainer, int a)
{
    typename T :: iterator iter;
    iter = std :: find(myContainer.begin(), myContainer.end(), a);
    if(iter == myContainer.end())
        throw(std :: runtime_error("value not found"));
    return(iter);
}










#endif