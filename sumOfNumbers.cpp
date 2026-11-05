// Copyright (c) 2026 Emmanuella Taiwo All rights reserved
// Created by: Emmanuella Taiwo
// Date: 26th Oct,2026
// This program asks the user  for the sum of a positive number
// and displays the sum of all the number from
// the loop counter to the positive number and catches errors

#include <iostream>
#include <stdexcept>

int main() {
    // declare variables
    int userInput;
    int sum = 0;

    // get user input
    std::cout << "Enter a positive number: ";
    std::cin >> userInput;

    // catch errors that may occur during user input
     try {
        if (userInput != static_cast<int>(userInput)) {
            throw std::invalid_argument
            ("Invalid input.Please enter a valid integer.");
        }
    // check if user input is a positive number integer
    if (userInput < 0) {
        throw std::invalid_argument
        ("Invalid input. Please enter a positive number.");
    } else {
        // calculate the sum of all numbers from 0 to userInput
        for (int i = 0; i <= userInput; i++) {
            sum += i;
        }
        // display the result
        std::cout << "The sum of all numbers from 0 to " << userInput
                    << " is: " << sum << std::endl;
    }
    }
    catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "An error occurred: " << e.what() << std::endl;
    }


    return 0;
}
