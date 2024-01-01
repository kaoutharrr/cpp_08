/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:46:08 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/30 15:09:49 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"
#include<array>
#include<vector>
#include<list>

int main() 
{
	std::array <int, 5> arr = {1, 2, 3, 4, 5};
	std :: vector<char> v;
	std :: list <int> myList;
	
	v.push_back('a');
	v.push_back('b');
	myList.push_back(10);
	myList.push_back(-2);
	myList.push_back(11);
	
 	try
	{
		std::cout << "array : " <<*(easyfind(arr,1)) << " is at index " << std::distance(arr.begin(), easyfind(arr , 1))<<  std::endl;
		std::cout << "vector : " <<*(easyfind(v,'b')) << " is at index " << std::distance(v.begin(), easyfind(v, 'b'))<<  std::endl;
		std::cout << "list : " <<*(easyfind(myList,11)) << " is at index " << std::distance(myList.begin(), easyfind(myList, 11))<<  std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
 }
