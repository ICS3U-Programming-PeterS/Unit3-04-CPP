// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// This program asks the user to enter an integer and
// tells them if it is positive, negative or 0
#include <iostream>

int main() {
    // declare variables
    int userInteger;

    // get integer user input
    std::cout << "Enter an integer: ";
    std::cin >> userInteger;

    // checks if user input is positive, negative or 0
    if (userInteger > 0) {
        std::cout << userInteger << " is a positive number";
    } else if (userInteger < 0) {
        std::cout << userInteger << " is a negative number";
    } else {
        std::cout << userInteger << " is just zero!";
    }
}
