/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:27:01 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/14 13:27:05 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << "Int array:" << std::endl;
    iter(arr, 5, print);
    std::string arr2[] = {"one", "two", "three", "four", "five"};
    std::cout << "String array:" << std::endl;
    iter(arr2, 5, print);
    return 0;
}
