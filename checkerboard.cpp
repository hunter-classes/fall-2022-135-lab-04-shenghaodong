#include <iostream>

void makeCheckerboard(int width, int height){
    int counter = 0;
    for(int i = 0; i < height; i++){
        if(counter%2 == 0){
            for(int x = 0; x < width; x++){
                std::cout << "*";
                std::cout << " ";
            }
        }else{
            std::cout << " ";
            for(int j = 1; j < width; j++){
                std::cout << "*";
                std::cout << " ";
            }
        }
        counter += 1;
        std::cout << "\n";
    }
}