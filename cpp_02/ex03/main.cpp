/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:48:41 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/30 17:13:22 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point const a(2, 1);
	Point const b(3, 4);
	Point const c(5, 1);
	Point const point(400,2);


	bool result = bsp(a, b, c, point);

	if (result)
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is outside the triangle" << std::endl;

	return (0);
}
