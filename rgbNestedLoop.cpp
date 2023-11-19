// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Nov. 19, 2023
// This program displays all possible colour
// combinations for RGB using nested loops.

#include <iostream>

int main() {
    // introduce program to user
    std::cout << "This program displays all RGB colour combinations.\n";

    // declare variables
    int red;
    int green;
    int blue;

    // for loop of all colours
    for (red = 0; red <= 255; red++) {
        for (green = 0; green <= 255; green++) {
            for (blue = 0; blue <= 255; blue++) {

                // display combinations in their own colours
                printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)", red, green, blue, red, green, blue);
            }
        }
    }
}
