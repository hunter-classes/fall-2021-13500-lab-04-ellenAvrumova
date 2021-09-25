#include <iostream>

std::string checkerboard(int width, int height) {
    std::cout << "Input width: " << width << std::endl;
    std::cout << "Input height: " << height << std::endl;
    std::string checker;
    for(int row = 0; row < height; row++) {
        for(int col = 0; col < width; col++) {
            if(col % 2 != 0 && row % 2 == 0) {
                checker += " ";
            }
            else if(col % 2 == 0 && row % 2 != 0) {
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