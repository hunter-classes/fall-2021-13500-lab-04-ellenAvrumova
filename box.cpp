/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 4
 * 
 */

#include <iostream>
#include "box.h"

std::string box(int width, int height) {
    std::cout << "Input width: " << width << std::endl;
    std::cout << "Input height: " << height << std::endl;
    std::string box;
    for(int i = 0; i < height; i++) {
        for(int x = 0; x < width; x++) {
            box += "*";
        }
        box += "\n";
    }
    return box;
}