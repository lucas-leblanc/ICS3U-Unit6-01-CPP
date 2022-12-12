// Copyright (c) 2022 Lucas LeBlanc All rights reserved

// Created by: Lucas LeBlanc
// Created on: Dec 2022
// This program finds the average of 10 random numbers

#include <iostream>
#include <random>

int main() {
    // This function finds the average of 10 random numbers
    int ListOfNumbers[10];
    int RandomNumber;
    float Average = 0;

    for (int counter = 0; counter < 10; counter++) {
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 100);
    RandomNumber = idist(rgen);
    ListOfNumbers[counter] = RandomNumber;
    Average = Average + RandomNumber;
    std::cout << "The random number is: " << RandomNumber << std::endl;
    }

    Average = Average/ (sizeof(ListOfNumbers) / sizeof(ListOfNumbers[0]));
    std::cout << "\nThe Average is " << Average << std::endl;
    std::cout << "\nDone." << std::endl;
}
