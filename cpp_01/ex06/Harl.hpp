/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:41:17 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 13:41:19 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	private:

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		Harl();
		~Harl();

	void complain( std::string level );
};

#endif
