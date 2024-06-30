/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:48:00 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/29 19:48:03 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	calculateTriangleArea(const Point p1, const Point p2, const Point p3)
{
	float	area = 0.5*(p1.getX() * (p2.getY() - p3.getY())
					+ p2.getX() * (p3.getY() - p1.getY())
					+ p3.getX() * (p1.getY() - p2.getY()));
	if (area < 0)
		area *= -1;
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	A = calculateTriangleArea(a, b, c);
	float	A1 = calculateTriangleArea(a, b, point);
	float	A2 = calculateTriangleArea(a, c, point);
	float	A3 = calculateTriangleArea(b, c, point);
	if (A1 == 0 || A2 == 0 || A3 == 0)
		return (false);
	float	sum = A1 + A2 + A3;
	if (sum == A)
		return (true);
	return (false);
}
