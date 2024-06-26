/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:40:39 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 13:40:41 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

	Harl::Harl(void)
	{
		return ;
	}
	Harl::~Harl(void)
	{
		return ;
	}

	void Harl::debug( void )
	{
		std::cout << "[DEBUG]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	}

	void Harl::info( void )
	{
		std::cout << "[INFO]: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	}

	void Harl::warning( void )
	{
		std::cout << "[WARNING]: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	}

	void Harl::error( void )
	{
		std::cout << "[ERROR]: This is unacceptable! I want to speak to the manager now." << std::endl;
	}

	void Harl::wrong(void)
	{
		std::cout << "Invalid Complain" <<std::endl;
	}

	void Harl::complain( std::string level )
	{
		void (Harl::*ptr)(void);

		ptr = &Harl::wrong;
		(!level.compare("DEBUG") && (ptr = &Harl::debug));
		(!level.compare("INFO") && (ptr = &Harl::info));
		(!level.compare("WARNING") && (ptr = &Harl::warning));
		(!level.compare("ERROR") && (ptr = &Harl::error));
		(this->*ptr)();
	}

