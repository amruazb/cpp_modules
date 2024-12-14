/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:01:08 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 20:01:10 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURSE_HPP
# define CURSE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &copy);
		Cure &operator=(Cure const &copy);
		virtual ~Cure();

		virtual AMateria* clone() const;
};

#endif
