/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:57:04 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/02 16:57:05 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base *generate(void)
{
    if (std::rand() % 3 == 0)
        return (new A);
    else if (std::rand() % 3 == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base *p)
{
    if (!p)
    {
        std::cout << "\033[1;33mError: Null pointer.\033[0m" << std::endl;
        return;
    }
    if (dynamic_cast<A *>(p))
        std::cout << "\033[1;31m*A: The light is bending around me 🌟.\033[0m" << std::endl;
        else if (dynamic_cast<B *>(p))
        std::cout << "\033[1;32m*B: Time feels slower here ⏳.\033[0m" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "\033[1;34m*C: I can see the entire universe from here 🌌.\033[0m" << std::endl;
    else
        std::cout << "Error: Unknown type." << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "\033[1;31m&A: The light is bending around me 🌟.\033[0m" << std::endl;
    }
    catch (std::exception &e1)
    {
        try
        {
            B &b = dynamic_cast<B &>(p);
            (void)b;
            std::cout << "\033[1;32m&B: Time feels slower here ⏳.\033[0m" << std::endl;
        }
        catch (std::exception &e2)
        {
            try
            {
                C &c = dynamic_cast<C &>(p);
                (void)c;
                std::cout << "\033[1;34m&C: I can see the entire universe from here 🌌.\033[0m" << std::endl;
            }
            catch (std::exception &e3)
            {
                std::cout << "Error: " << "Error: Unknown type." << std::endl;
            }
        }
    }
}
