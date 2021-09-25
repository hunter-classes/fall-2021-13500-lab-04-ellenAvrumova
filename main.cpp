/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 4
 * 
 */

#include <iostream>
#include "shapes.h"

int main() {
    std::string result;
    result = box(3,5);
    std::cout << "box(3,5): \n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = box(7,4);
    std::cout << "box(7,4): \n";
    std::cout << result;
    std::cout << "\n------------------\n";
    
    result = checkerboard(11,6);
    std::cout << "checkerboard(11,6): \n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = checkerboard(20,10);
    std::cout << "checkerboard(20,9): \n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = cross(8);
    std::cout << "cross(8): \n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = cross(21);
    std::cout << "cross(21): \n";
    std::cout << result;
    std::cout << "\n------------------\n";

    return 0;
}