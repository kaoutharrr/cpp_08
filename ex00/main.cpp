/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:46:08 by kkouaz            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/01/01 19:34:00 by kkouaz           ###   ########.fr       */
=======
/*   Updated: 2024/01/01 19:25:18 by kkouaz           ###   ########.fr       */
>>>>>>> 9447066b440af8c8358fd1bf15ada2b1a1aee6db
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"
<<<<<<< HEAD
=======
//#include<array>
>>>>>>> 9447066b440af8c8358fd1bf15ada2b1a1aee6db
#include<vector>
#include<list>

int main() 
{
<<<<<<< HEAD
=======
	//std:: array <int, 5> arr = {1, 2, 3, 4, 5};
>>>>>>> 9447066b440af8c8358fd1bf15ada2b1a1aee6db
	std :: vector<char> v;
	std :: list <int> myList;
	
	v.push_back('a');
	v.push_back('b');
	myList.push_back(10);
	myList.push_back(-2);
	myList.push_back(11);
	
 	try
	{
<<<<<<< HEAD
=======
		//std::cout << "array : " <<*(easyfind(arr,1)) << " is at index " << std::distance(arr.begin(), easyfind(arr , 1))<<  std::endl;
>>>>>>> 9447066b440af8c8358fd1bf15ada2b1a1aee6db
		std::cout << "vector : " <<*(easyfind(v,'b')) << " is at index " << std::distance(v.begin(), easyfind(v, 'b'))<<  std::endl;
		std::cout << "list : " <<*(easyfind(myList,11)) << " is at index " << std::distance(myList.begin(), easyfind(myList, 11))<<  std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
 }
