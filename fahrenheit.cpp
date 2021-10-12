// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: Sep 2021
// this program calculates fahrenheit

#include <iostream>

void CalculateFahrenheit() {
    // calculates fahrenheit

    float celcius;
    float fahrenheit;
    std::string celcius_string;

    // input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> celcius_string;

    // process and output
    try {
        celcius = std::stof(celcius_string);
        fahrenheit = (9.0/5.0) * celcius + 32;
        std::cout << celcius << "°C is equal to "
            << fahrenheit << "°F." << std::endl;
    } catch (std::invalid_argument) {
            std::cout << celcius_string << " is an invalid input" << std::endl;
        }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
main() {
    // this function calls CalculateFahrenheit

    // call CalculateFahrenheit
    CalculateFahrenheit();
}
