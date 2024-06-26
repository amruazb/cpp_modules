/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:37:51 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 13:37:53 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void) const;
		void	setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif


