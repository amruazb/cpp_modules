/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 21:02:06 by aabashee          #+#    #+#             */
/*   Updated: 2025/01/19 21:02:08 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>

class BitcoinExchange
{
public:
    static void processFile(const std::string &filename);
    static void processInputFile(const std::string &inputFile);

private:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &src);
    BitcoinExchange &operator=(const BitcoinExchange &rhs);
    ~BitcoinExchange();

    static std::map<std::string, float> loadData(const std::string &filename);
    static float convert(const std::string &date, const std::map<std::string, float> &data);
    static bool validateValue(float value);

    static std::map<std::string, float> data;
};

#endif
