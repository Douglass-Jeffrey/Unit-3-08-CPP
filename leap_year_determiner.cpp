// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Oct 2019
// This program determines if a user inputted year is a leap year


#include <iostream>
#include <string>

main() {
    // This determines if a user inputted year is a leap year

    // variables
    int useryear;
    std::string leapyear = " is not";

    // input
    std::cout << "Input any year:" << std::endl;
    std::cin >> useryear;

    // process and output
    if (useryear % 4 == 0) {
        if (useryear % 100 == 0) {
            if (useryear % 400 == 0)
                leapyear = " is";
        } else {
            leapyear = " is";
        }
    }
    std::cout << useryear << leapyear << " is a Leap Year" << std::endl;
}
