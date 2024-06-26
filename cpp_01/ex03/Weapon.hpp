/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:40:01 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 13:40:03 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:

	std::string _type;

	public:
		Weapon(std::string weaponType);
		~Weapon();

		std::string const getType();
		void setType(std::string weaponType);
};

#endif
