/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:57:11 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/02 16:57:14 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


int	main(void)
{
	for (int test_count = 0; test_count < 10; test_count++)
	{
		Base *astronuts = generate();
		identify(astronuts);
		identify(*astronuts);
		delete astronuts;
	}
	return (0);
}
