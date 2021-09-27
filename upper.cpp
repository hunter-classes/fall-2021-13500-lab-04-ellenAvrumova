/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 4E
 * 
 * This function takes in an inputted length and prints prints the top right half of a square with that length.
 */

#include <iostream>

std::string upper(int length) {
    std::cout << "Input side length: " << length << std::endl;
    std::string shape;
    for(int row = 1; row <= length; row++) {
        for(int col = row; col <= length; col++) {
            shape += "*";
        }
        shape += "\n";
        for(int space = 1; space <= row; space++) {
            shape += " ";   
        }
    }
    return shape;
}