/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:00:54 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 20:00:57 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMAETERIA_HPP
# define AMAETERIA_HPP

# include <iostream>
# include "Character.hpp"

class ICharacter;
class AMateria
{
	protected:
		std::string _type;

		AMateria();
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &copy);

	public:
		AMateria(std::string const & type);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif