/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 4
 * 
 */

#include <iostream>
#include "shapes.h"

std::string box(int width, int height) {
    std::cout << "Input width: " << width << std::endl;
    std::cout << "Input height: " << height << std::endl;
    std::string box;
    for(int row = 0; row < height; row++) {
        for(int col = 0; col < width; col++) {
            box += "*";
        }
        box += "\n";
    }
    return box;
}