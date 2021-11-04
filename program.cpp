// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This program uses an array

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int largestNumberCalculator(std::array<int, N> randomNumbers) {
    // this functions add up all the numbers in the list

    int number = randomNumbers[1];

    for (int counter = 0; counter < randomNumbers.size(); counter++) {
        if (randomNumbers[counter] > number) {
            number = randomNumbers[counter];
        } else {
            number = number;
        }
    }

    return number;
}


main() {
    // this function uses an array

    std::array<int, 10> randomNumbers;
    int randomNumber;
    int summ = 0;
    int largestNumber;

    std::cout << "Starting..." << std::endl;

    std::cout << "" << std::endl;

    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(-100, 100);  // [0,100]
        randomNumber = idist(rgen);
        randomNumbers[loopCounter] = randomNumber;
        std::cout << "The random number " << loopCounter + 1
        << " is: " << randomNumber << std::endl;
    }

    std::cout << "" << std::endl;
    largestNumber = largestNumberCalculator(randomNumbers);
    std::cout << "The largest number is " << largestNumber << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
