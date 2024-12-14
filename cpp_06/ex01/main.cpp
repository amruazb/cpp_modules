/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:56:45 by aabashee          #+#    #+#             */
/*   Updated: 2024/12/02 16:56:47 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data data;
	Data* data_ptr = &data;
	// We need to declare a variable to store the serialized data
	unsigned long int serialized_data;

	// For testing purposes, we will set the values of the data structure
	data.first_name = "John";
	data.last_name = "Doe";
	data.account_id = 42;

	// The serialize method converts the data pointer to
	// an unsigned integer type unsigned long int and returns it
	serialized_data = Serializer::serialize(data_ptr);
	std::cout << "Serialized data: " << serialized_data << std::endl;

	// Now we need to restore the original data pointer
	// by deserializing the unsigned integer value we got
	// which will convert it back to a pointer to Data
	Data* deserialized_data = Serializer::deserialize(serialized_data);
	std::cout << "Deserialized data: " << deserialized_data << std::endl; // Print the deserialized data

	if (deserialized_data == data_ptr) // Check if the deserialized data is equal to the original data pointer
		std::cout << "Deserialized data is equal to the original pointer" << std::endl; // Print a message indicating that the deserialized data is equal to the original pointer
	else
		std::cout << "Deserialized data is not equal to the original pointer" << std::endl; // Print a message indicating that the deserialized data is not equal to the original pointer

	return 0;
}