/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:39:22 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 13:39:24 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:

		std::string _name;
		Weapon 		*_weapon;

	public:

		HumanB(std::string name);
		~HumanB(void);

		void	attack(void);
		void setWeapon(Weapon &weapon);

};

#endif
