// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon (Jay) Lee
// Created on: Dec 2019
// This program shows the average of numbers in 2d array

#include <iostream>
#include <time.h>


template <int rows, int cols>
float calculateAverage(int (&passedIn2DList)[rows][cols]) {
    // this function calculates the average

    int total = 0;
    float average = 0;

    for (size_t rowElement = 0; rowElement < rows; ++rowElement) {
        for (size_t columnElement = 0; columnElement < cols; ++columnElement)
            total += passedIn2DList[rowElement][columnElement];
    }
    int row = (sizeof(passedIn2DList) / sizeof(passedIn2DList[0]));
    int col = sizeof passedIn2DList[0] / sizeof(int);
    average = total / (row * col * 1.0);

    return average;
}


int main() {
    // this function shows the average of numbers in 2d array

    int aSingleRandomNumber = 0;
    float average = 0;
    const int rows = 2;
    const int columns = 3;
    int a2DArray[rows][columns];

    srand(time(NULL));

    // input
    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            aSingleRandomNumber = (rand() % 50) + 1;
            a2DArray[rowElement][columnElement] = aSingleRandomNumber;
            std::cout << aSingleRandomNumber << ", ";
        }
        std::cout << std::endl;
    }

    average = calculateAverage(a2DArray);

    std::cout.precision(4);
    std::cout << "The average of random numbers in 2d array is: " << average
              << std::endl;
}
