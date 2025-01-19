/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:36:29 by aabashee          #+#    #+#             */
/*   Updated: 2025/01/03 17:02:27 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iomanip>

// Test function for easyfind
void test_me(int argc, char **argv, size_t vec_size)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./easyfind [number]" << std::endl;
        return;
    }

    std::vector<int>    vec;
    for (size_t index = 0; index < vec_size; index++)
    {   
        if (rand() % 2 == 0 && std::find(vec.begin(), vec.end(), atoi(argv[1])) == vec.end())
            vec.push_back(atoi(argv[1]));
        else
            vec.push_back(rand() % 100);
    }
    std::cout << "\033[1;33m";
    std::cout << "╭────";
    for (size_t i = 0; i < vec.size() - 1; i++)
        std::cout << "┬────";
    std::cout << "╮" << std::endl;
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        if (*it == atoi(argv[1]))
            std::cout << "│ \033[1;34m" << std::setw(2) << *it << "\033[1;33m ";
        else
            std::cout << "│ \033[1;33m" << std::setw(2) << *it << "\033[1;33m ";
    }

    std::cout << "│" << std::endl;
    std::cout << "╰────";
    for (size_t i = 0; i < vec.size() - 1; i++)
    {
        std::cout << "┴────";
    }
    std::cout << "╯" << std::endl;
    std::cout << "\033[0m";
    // Now check if the value is in the vector
    try
    {
        // The message will have a blue background and white text
        std::cout << "\033[1;34m🔍 Searching for " << atoi(argv[1]) << " in vector\033[0m" << std::endl;
        easyfind(vec, atoi(argv[1]));
        std::cout << "\033[1;32m✅ Value found\033[0m" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "\033[1;31m❌ Error: " << e.what() << "\033[0m" << std::endl;
    }


    // Now check if the value is in the list
    std::list<int>      lst(vec.begin(), vec.end());
    try
    {
        // The message will have a blue background and white text
        std::cout << "\033[1;34m🔍 Searching for " << atoi(argv[1]) << " in list\033[0m" << std::endl;
        easyfind(lst, atoi(argv[1]));
        std::cout << "\033[1;32m✅ Value found\033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[1;31m❌ Error: " << e.what() << "\033[0m" << std::endl;
    }

    // What if we remove the value from the list?
    lst.remove(atoi(argv[1]));
    try
    {
        // The message will have a blue background and white text
        std::cout << "\033[1;34m🔍 Searching for " << atoi(argv[1]) << " in list\033[0m" << std::endl;
        easyfind(lst, atoi(argv[1]));
        std::cout << "\033[1;32m✅ Value found\033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[1;31m❌ Error: " << e.what() << "\033[0m" << std::endl;
    }
}


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./easyfind [number]" << std::endl;
        return (1);
    }

    test_me(argc, argv, 20);
    int value = atoi(argv[1]);

    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int>    vec(arr, arr + sizeof(arr) / sizeof(int));
    std::list<int>      lst(arr, arr + sizeof(arr) / sizeof(int));

    try
    {
        std::cout << "\033[1;31mSearching for " << value << " in vector\033[0m" << std::endl;
        easyfind(vec, value);
        std::cout << "\033[1;32mValue found\033[0m" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "\033[1;31m" << e.what() << "\033[0m" << std::endl;
    }


    try
    {
        std::cout << "\033[1;31mSearching for " << value << " in list\033[0m" << std::endl;
        easyfind(lst, value);
        std::cout << "\033[1;32mValue found\033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[1;31m" << e.what() << "\033[0m" << std::endl;
    }
    
    return (0);
}






