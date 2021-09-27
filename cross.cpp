/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 4C
 * 
 * This function takes in an inputted size and prints a diagonal cross of that dimension.
 */

#include <iostream>

std::string cross(int size) {
    std::cout << "Input size: " << size << std::endl;
    std::string cross;

    for(int i = 0; i < size; i++) {
         std::string row = std::string(size, ' ');
         row.replace(i,1,"*");
         row.replace(size-i-1,1,"*");
         cross += row;
         cross += "\n";
    }
    return cross;
}