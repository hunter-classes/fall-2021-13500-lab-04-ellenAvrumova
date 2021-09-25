/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 4
 * 
 */

#include <iostream>
#include "box.h"

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

    return 0;
}