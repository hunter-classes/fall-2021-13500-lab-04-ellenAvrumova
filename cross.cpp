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