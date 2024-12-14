/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:16:56 by aabashee          #+#    #+#             */
/*   Updated: 2024/11/18 17:17:02 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("Shrubbery Creation", 145, 137), _target(target)
{
	// std::cout << "ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : AForm(src)
{
	// std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	AForm::operator=(src);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

const char* ShrubberyCreationForm::FileNotOpenException::what() const throw()
{
	return ("Error opening the file!");
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	else if (this->isSigned() == false)
		throw AForm::FormNotSignedException();
	
	std::string filename = this->_target + "_shrubbery";
	std::ofstream file(filename.c_str());
	if (file.fail())
		throw FileNotOpenException();

	file << std::endl;
	file << "                          @@@@@@@@@@@@@@@@@@@      @@@@@@@                                          " << std::endl;
	file << "                          @@@@@@@@@@@#-..*@@@@@@@@@@@@@@@@@@@                                       " << std::endl;
	file << "                          @@@@:.............+@#=.....+@@@@                                          " << std::endl;
	file << "                      @@@@@@=. . .    .    .         -@@@@@@@@@@@@@@@                               " << std::endl;
	file << "                    @@@@@@+.      ..        ..        ....     ...:@@@                              " << std::endl;
	file << "                @@@@@@@@@.. ....  ... ....  .....  .  .........:-*%@@@@@@@@@@@@@@@                  " << std::endl;
	file << "                     @@@@#.. . ..*@@@@@@#*=:..  .  ..+#. =@@@@@@@*%@@#*+=+@@@@@@@@@@                " << std::endl;
	file << "                      @@@@@=.:%*................................................:@@@                " << std::endl;
	file << "                        @@@@-..........................................-=*#-...:@@@@                " << std::endl;
	file << "                   @@@@@@@*.....................................=%@@@@@@@@@....*@@@@@@@@@           " << std::endl;
	file << "                  @@@@%...  .  .  ..  .     ..  .     ..  .   ..@. ...    ..  .  .+@@@@@            " << std::endl;
	file << "               @@@@@@@@@@@@#-*+=.  .     .  ..  .  .  ..  .  =@@..  .  .  ..  .:#@@@@@@             " << std::endl;
	file << "                      @@@@@@@@@@@@@#-:..... .....  .. ..+@@@@%*:......... ....#@@@@@@@@@@@@@@@@@@@@@" << std::endl;
	file << "               @@@@@@@@@@#@@@@@@#*::=---:. ... .     ....#%-.@@@@@@@@@%. ... ........-%@@@@@@@@     " << std::endl;
	file << "        @@@@@@@@@@%%#-.........................................#@:@+...........:*@@@@@@@@@          " << std::endl;
	file << "     @@@@@@:...................................................+@%@@@*++......#@@@                  " << std::endl;
	file << "@@@@@@@@@*-...........................--#*=+...::::+=....#@-...@@...+@@@#.....:*@@@@@@@             " << std::endl;
	file << "      @@@@@@@=::+#%%*.  ..  .  .  ...%@@@@@@@@@@@@@@@#..#@@: *@#...@@@=+. .*@@@@@@@@@               " << std::endl;
	file << "           @@@@@@=-:..   ..    .   .     .=@@%.+@@+.%@:#@%:#@@. .+@+. .*@@@@                        " << std::endl;
	file << "               @@%...-%@@@@@@*..  ...... ...%@@-.#@@@@+@@@@@%.. -@...:@@@                           " << std::endl;
	file << "                @@@@@@@@  @@@@@+.=@@@@@@+::=+*@@%..%@@#@@@@:   .@%%@@@@@                            " << std::endl;
	file << "                 @            @@@@@@@#@@@@@@@@@@@@: -@@@@@*.   *@@@@@@                              " << std::endl;
	file << "                               @@@@@@@@@........:@@...#@#.....:@@                                   " << std::endl;
	file << "                                 @@@@+...........%@@........%.=@@                                   " << std::endl;
	file << "                                    @@@@-.  ..  +@@.  ..  .%%.+@                                    " << std::endl;
	file << "                                      @@@@@@@#+%@@@=  ..  .:..%@                                    " << std::endl;
	file << "                                             @@@@@@@*......@:.@@                                    " << std::endl;
	file << "                                                  @@@@.....@-.@@@                                   " << std::endl;
	file << "                                                  @@@%    .%+.@@@                                   " << std::endl;
	file << "                                                   @@*.....#*.%@@                                   " << std::endl;
	file << "                                                   @@%.....*#.*@@                                   " << std::endl;
	file << "                                                   @@@..  .=# +@@                                   " << std::endl;
	file << "                                                   @@@..  .:#.=@@                                   " << std::endl;
	file << "                                                    @@........=@@                                   " << std::endl;
	file << "                                                    @@+.....%*.@@@                                  " << std::endl;
	file << "                                                   @@@.        .@@@                                 " << std::endl;
	file << "                                                   @#............@@                                 " << std::endl;
	file << "                                                 @%:.............+@@                                " << std::endl;
	file << "                                                @#  ....  .#@@@@+.@@@@                              " << std::endl;
	file << "                                              @@@@@@@@@%..@@@@@@@@@@@@@@@                           " << std::endl;
	file << "                                           @@@@@@@    @@@@@@@         @@@@@@@                       " << std::endl;
	file << "                                           @@           @@@@@              @                        " << std::endl;
	file << "" << std::endl;
	file << "" << std::endl;
	file.close();
}
