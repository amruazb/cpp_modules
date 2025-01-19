/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:37:18 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/27 15:37:20 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <string>


int main()
{
    std::list<int> mstack;

    std::cout << "\033[34m→ Pushing 5 onto the stack...\033[0m" << std::endl;
    mstack.push_back(5);
    std::cout << "\033[34m→ Pushing 17 onto the stack...\033[0m" << std::endl;
    mstack.push_back(17);
    std::cout << "\033[32mTop element: " << mstack.front() << "\033[0m" << std::endl;
    std::cout << std::endl;
    
    mstack.front();
    std::cout << "\033[36mTop element after pop: " << mstack.front() << "\033[0m" << std::endl;
    std::cout << "\033[36mSize of the stack: " << mstack.size() << "\033[0m" << std::endl << std::endl;

    std::cout << "\033[33mPushing more elements onto the stack...\033[0m" << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);

    std::cout << "\033[33mIterating through the stack...\033[0m" << std::endl;
     std::list<int>::iterator it = mstack.begin();
     std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << "\033[34m" << *it << " \xE2\x9E\xA1 \033[0m";
        ++it;
    }
    std::cout << std::endl;

    std::cout << "\033[33mTesting copy constructor...\033[0m" << std::endl;
     std::list<int> mstack_copy(mstack);
    std::cout << "\033[33mIterating through the copied stack...\033[0m" << std::endl;
    for ( std::list<int>::iterator it_copy = mstack_copy.begin(); it_copy != mstack_copy.end(); ++it_copy) {
        std::cout << "\033[35m" << *it_copy << " \xE2\x9E\xA1 \033[0m";
    }
    std::cout << std::endl;

    std::cout << "\033[33mTesting assignment operator...\033[0m" << std::endl;
     std::list<int> mstack_assign;
    mstack_assign = mstack;
    std::cout << "\033[33mIterating through the assigned stack...\033[0m" << std::endl;
    for ( std::list<int>::iterator it_assign = mstack_assign.begin(); it_assign != mstack_assign.end(); ++it_assign) {
        std::cout << "\033[36m" << *it_assign << " \xE2\x9E\xA1 \033[0m";
    }
    std::cout << std::endl;

    return 0;
}
