/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 4D
 * 
 * This function takes in an inputted length and prints the bottom left half of a square with that length.
 */

#include <iostream>

std::string lower(int length) {
    std::cout << "Input side length: " << length << std::endl;
    std::string shape;
    for(int row = 1; row <= length; row++) {
        for(int col = 1; col <= row; col++) {
            shape += "*";
        }
        shape += "\n";
    }
    return shape;
}