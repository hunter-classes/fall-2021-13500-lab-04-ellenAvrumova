#include <iostream>

std::string lower(int length) {
    std::cout << "Input side length: " << length << std::endl;
    std::cout << "Shape: " << std::endl;
    std::string shape;
    for(int row = 1; row <= length; row++) {
        for(int col = 1; col <= row; col++) {
            shape += "*";
        }
        shape += "\n";
    }
    return shape;
}