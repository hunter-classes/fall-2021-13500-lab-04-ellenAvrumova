/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 4G
 * 
 * This function takes in an inputted width and height and prints a checkerboard with 3x3 squares.
 */

#include <iostream>

std::string checkerboard3(int width, int height) {
    std::cout << "Input width: " << width << std::endl;
    std::cout << "Input height: " << height << std::endl;
    std::string checker;
    for(int row = 0; row < height; row++) {
        for(int col = 0; col < width; col++) {
            if((col/3) % 2 != 0 && (row/3) % 2 == 0) {
                checker += " ";
            }
            else if((col/3) % 2 == 0 && (row/3) % 2 != 0) {
                checker += " ";
            }
            else {
                checker += "*";
            }
        }
        checker += "\n";
    }
    return checker;
}