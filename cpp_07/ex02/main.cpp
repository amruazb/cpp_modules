/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:34:11 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/14 13:34:13 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
    try {
        // Test default constructor
        Array<int> defaultArray;
        std::cout << "\033[33m🟡 DefaultArray size:\t" << defaultArray.size() << "\033[0m" << std::endl;

        // Test parameterized constructor
        Array<int> paramArray(5);
        std::cout << "\033[34m🔵 ParamArray size:\t" << paramArray.size() << "\033[0m" << std::endl;
        for (unsigned int i = 0; i < paramArray.size(); ++i)
            paramArray[i] = i * 10;

        // Display contents of paramArray
        for (unsigned int i = 0; i < paramArray.size(); ++i)
            std::cout << "🔢 ParamArray[" << i << "]: " << paramArray[i] << std::endl;

        // Test copy constructor
        Array<int> copyArray(paramArray);
        std::cout << "\033[35m🟣 CopyArray (copy of ParamArray) size:\t" << copyArray.size() << "\033[0m" << std::endl;
        for (unsigned int i = 0; i < copyArray.size(); ++i)
            std::cout << "🔢 CopyArray[" << i << "]: " << copyArray[i] << std::endl;

        // Modify paramArray and ensure copyArray is not affected
        paramArray[0] = 100;
        std::cout << "🛠️ After modifying ParamArray[0], ParamArray[0]: " << paramArray[0] << ", CopyArray[0]: " << copyArray[0] << std::endl;

        // Test assignment operator
        Array<int> assignArray;
        assignArray = paramArray;
        std::cout << "\033[36m🟤 AssignArray (assigned from ParamArray) size:\t" << assignArray.size() << "\033[0m" << std::endl;
        for (unsigned int i = 0; i < assignArray.size(); ++i)
            std::cout << "🔢 AssignArray[" << i << "]: " << assignArray[i] << std::endl;

        // Modify paramArray and ensure assignArray is not affected
        paramArray[1] = 200;
        std::cout << "🛠️ After modifying ParamArray[1], ParamArray[1]: " << paramArray[1] << ", AssignArray[1]: " << assignArray[1] << std::endl;

        // Test out-of-bounds access
        std::cout << "\033[31m🚨 Attempting out-of-bounds access:\033[0m" << std::endl;
        std::cout << paramArray[10] << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "❗ Exception: " << e.what() << std::endl;
    }

    return 0;
}
