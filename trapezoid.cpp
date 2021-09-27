/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 4F
 * 
 * This function takes in an inputted width and height and prints
 * an upside down trapezoid or triangle with those dimensions.
 * If an impossible size is inputted, it let's the user know.
 */

#include <iostream>

std::string trapezoid(int width, int height) {
    std::cout << "Input width: " << width << std::endl;
    std::cout << "Input height: " << height << std::endl;
    std::string shape;
    if ((width % 2 == 0 && height > width/2) || (width % 2 != 0 && height > width/2+1)) {
        std::cout << "Impossible shape!" << std::endl;
    }

    else {
        std::cout << "Shape: " << std::endl;
        std::cout << "trapezoid(" << width << "," << height << "): " << std::endl;
        std::string row = std::string(width, '*');
        shape += row += "\n";
        for(int col = 0; col < height; col++) {
            for(int row = 0; row < width; row++) {
                if(row <= col || row >= width-col-1) {
                    shape += " ";
                }
                else {
                    shape += "*";   
                }
            }
            shape += "\n";
        }
    }
    return shape;
}