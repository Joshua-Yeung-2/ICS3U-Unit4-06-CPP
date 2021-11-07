// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on October 2021
// This program is to testing the nest loop

#include <iostream>

int main() {
    // This function is to test the continue statement.
    for (int red = 0; red <= 256; red++) {
        for (int green = 0; green <= 256; green++) {
            for (int blue = 0; blue <= 256; blue++) {
                std::cout << red << ", " << green << ", " << blue << std::endl;
            }
        }
    }
}
