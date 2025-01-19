/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:36:51 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/27 15:36:53 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main()
// {
//     Span sp = Span(5);

//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }

int main()
{
    const unsigned int testSize = 1000000;
    Span sp(testSize);

    std::srand(static_cast<unsigned int>(std::time(0)));

    // Add random numbers to the Span
    for (unsigned int i = 0; i < testSize; ++i) {
        int number = std::rand();
        sp.addNumber(number);
    }

    try {
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        // Open a file to write the stored numbers and differences
        std::ofstream outfile("numbers.txt");
        if (!outfile.is_open()) {
            std::cerr << "Failed to open the file." << std::endl;
            return 1;
        }

        // Write the stored numbers to the file
        const std::vector<int>& numbers = sp.getNumbers();

        // write the max and min values
        outfile << "Max value: " << *std::max_element(numbers.begin(), numbers.end()) << "\n";
        outfile << "Min value: " << *std::min_element(numbers.begin(), numbers.end()) << "\n";
        outfile << "longest span: " << sp.longestSpan() << "\n";

        // Write the differences to the file
        std::vector<int> sorted_numbers = numbers;
        std::sort(sorted_numbers.begin(), sorted_numbers.end());
        outfile << "\nDifferences between pairs:\n";
        for (std::vector<int>::size_type i = 1; i < sorted_numbers.size(); ++i) {
            outfile << "|" << sorted_numbers[i] << " - " << sorted_numbers[i - 1] << "| = " 
                    << sorted_numbers[i] - sorted_numbers[i - 1] << "\n";
        }

        outfile.close();
        std::cout << "Numbers and differences have been written to numbers.txt" << std::endl;

    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
