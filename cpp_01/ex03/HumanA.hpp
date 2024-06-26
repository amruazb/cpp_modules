/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:38:48 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 13:38:53 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:

	std::string _name;
	Weapon& _weapon;

	public:
		HumanA(std::string name, Weapon &Weapon);
		~HumanA(void);

		void attack();
};

#endif
