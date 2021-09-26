#include <iostream>

std::string lower(int size) {
    std::cout << "Input side length: " << size << std::endl;
    std::cout << "Shape: " << std::endl;
    std::string shape;
    for(int row = 1; row <= size; row++) {
        for(int col = 1; col <= row; col++) {
            shape += "*";
        }
        shape += "\n";
    }
    return shape;
}