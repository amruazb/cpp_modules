/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 21:01:58 by aabashee          #+#    #+#             */
/*   Updated: 2025/01/19 21:02:00 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <climits>
#include <map>

std::map<std::string, float> BitcoinExchange::data;

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
    (void)src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
    if (this != &rhs)
        this->data = rhs.data;
    return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

std::map<std::string, float> BitcoinExchange::loadData(const std::string &filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
        throw std::runtime_error("Error: could not open file " + filename);

    std::map<std::string, float> data;
    std::string line;

    // Read the first line to check if it matches "date,exchange_rate"
    if (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string date, exchange_rate;
        if (std::getline(ss, date, ',') && std::getline(ss, exchange_rate, ','))
        {
            if (date == "date" && exchange_rate == "exchange_rate")
            {
                // Ignore this line and read the next
                std::getline(file, line);
            }
            else
            {
                // Process this line as a regular data line
                ss.clear();
                ss.str(line);
            }
        }
    }

    while (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string date;
        float value;

        if (std::getline(ss, date, ',') && ss >> value)
        {
            if (validateValue(value))
                data[date] = value;
            else
                throw std::runtime_error("Error: invalid data in line => " + line);
        }
        else
            throw std::runtime_error("Error: bad input => " + line);
    }
    return (data);
}

void BitcoinExchange::processFile(const std::string &filename)
{
    data = loadData(filename);
}

void BitcoinExchange::processInputFile(const std::string &inputFile)
{
    std::ifstream file(inputFile.c_str());
    if (!file.is_open())
    {
        throw std::runtime_error("Error: could not open file " + inputFile);
    }

    std::string line;
    while (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string date;
        float value;

        if (std::getline(ss, date, '|') && ss >> value)
        {
            if (value < 0)
            {
                std::cerr << "Error: not a positive number." << std::endl;
            }
            else if (value > 1000)
            {
                std::cerr << "Error: too large a number." << std::endl;
            }
            else
            {
                try
                {
                    float result = convert(date, data) * value;
                    std::cout << date << " => " << value << " = " << result << std::endl;
                }
                catch (const std::out_of_range &e)
                {
                    std::cerr << "Error: " << e.what() << std::endl;
                }
            }
        }
        else
            std::cerr << "Error: bad input => " << line << std::endl;
    }
}

float BitcoinExchange::convert(const std::string &date, const std::map<std::string, float> &data)
{
    std::map<std::string, float>::const_iterator it = data.find(date);
    if (it != data.end())
        return (it->second);
    else
    {
        it = data.lower_bound(date);
        if (it != data.begin())
        {
            --it;
            return (it->second);
        }
        else
            throw std::out_of_range("date not found in data => " + date);
    }
}

bool BitcoinExchange::validateValue(float value)
{
    return (value >= 0);
}
