// Copyright (c) 2021 Abdul Basit All rights reserved.
//
// Created by: Abdul Basit
// Created on: Nov 2021
// this program is the number guessing game

#include <iostream>
#include <random>

int main() {
    int random_number_between_1_9;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int>idist(1, 9);  // [1,9]
    random_number_between_1_9 = idist(rgen);
    int guess;
    std::cout << "Enter a number between 0-9: ";
    std::cin >> guess;
    if (guess == random_number_between_1_9) {
    std::cout << "You guessed right !" << std::endl;
    std::cout << "" << std::endl;
  } else {
    std::cout << "Incorrect, the number was " << random_number_between_1_9
    << std::endl;
    std::cout << "" << std::endl;
  }
    std::cout << "Done." << std::endl;
}
