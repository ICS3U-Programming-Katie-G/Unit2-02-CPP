// Copyright (c) 2022 Katie G. All rights reserved.
//
// Created by: Katie
// Created on: September 23rd, 2022
// this program calculates the area and perimeter of a rectangle
// based on user input for the length and width.
#include <cmath>
#include <iostream>

// variables that have been declared so that they can be used before :)
float length, width, area, perimeter;

int main() {
    // get the input from the user for the length and width
    std::cout << "This program will calculate the area and perimeter\n";
    std::cout << "of a rectangle with user input\n";
    std::cout << "Please input the length of the rectangle in cm: ";
    std::cin >> length;
    std::cout << "Please input the width of the rectangle in cm: ";
    std::cin >> width;

    // calculation of the area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // display the results of the calculations back to the user
    std::cout << std::endl;
    std::cout << "The area is: " << area << " cm^2\n";
    std::cout << "The perimeter is: " << perimeter << " cm\n";
}
