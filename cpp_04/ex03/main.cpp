/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:03:15 by aabashee          #+#    #+#             */
/*   Updated: 2024/09/03 20:03:22 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"
# include "Character.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	if (src == 0)
	{
		std::cout << "src is NULL" << std::endl;
		return (1);
	}
	IMateriaSource* src2 = new MateriaSource();
	if (src2 == NULL)
	{
		std::cout << "src2 is NULL" << std::endl;
		return (1);
	}
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src2->learnMateria(new Ice());
	ICharacter* me = new Character("me");
	AMateria* changing_materia;
	
	for (int include = 0; include < 100; include++)
	{
		changing_materia = src->createMateria("ice");
		me->equip(changing_materia);
		changing_materia = src->createMateria("cure");
		me->equip(changing_materia);
	}
	me->equip(changing_materia);
	me->equip(changing_materia);
	me->equip(changing_materia);
	me->equip(NULL);
	src->createMateria("WOW");
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	me->use(5, *bob);

	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	me->unequip(4);
	me->unequip(5);
	
	delete bob;
	delete me;
	delete src;
	delete src2;

	return (0);
}
