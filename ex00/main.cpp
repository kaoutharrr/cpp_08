/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:46:08 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/22 21:29:04 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"
#include<vector>


// int main() 
// {
//     int a;
//     std :: vector<int> vect;
//     vect.push_back(10);
//     vect.push_back(20);
//     vect.push_back(30);
//     a = easyfind(vect, 10);
//     std :: cout << a << "\n";
    
// }

int main(void)
{
	std::vector<int> v;
	// std::deque<int> d;
	// std::list<int> l;

	// for (int i = 0; i < 10; i++)
	// {
	// 	v.push_back(i);
	// 	// d.push_back(i);
	// 	// l.push_back(i);
	// }
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
	try
	{
		std::cout << *(easyfind(v,15)) << " is at " << std::distance(v.begin(), easyfind(v, 15 n   )) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// try
	// {
	// 	std::cout << *(easyfind(d, 0)) << " is at " << std::distance(d.begin(), easyfind(d, 5)) << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try
	// {
	// 	std::cout << *(easyfind(l, 10)) << " is at " << std::distance(l.begin(), easyfind(l, 5)) << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	return (0);
}