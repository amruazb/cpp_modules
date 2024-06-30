/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:49:08 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/29 19:49:10 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
private:
	Fixed const x;
	Fixed const y;

public:
	Point();
	Point(const float x, const float y);
	Point(const Point &point);
	~Point();

	Point	&operator=(const Point &point);

	float	getX() const;
	float	getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
