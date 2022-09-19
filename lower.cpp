#include <iostream>

void makeLowerTriangle(int length){
    int count = 1;
    for(int i = 0; i < length; i++){
        for(int j = 0; j < count; j++){
            std::cout << "*"; 
        }
        count++;
        std::cout << "\n";
    }
}