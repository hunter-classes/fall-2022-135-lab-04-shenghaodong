#include <iostream>
//add a impossible shape!!
//Lowest on the bottom should be 4 stars. If it goes to 2 stars or under then it is considered a impossible shape
void makeTrap(int width, int height){
    int spaces = 0;
    int stars = width;
    for(int i = 0; i < height; i++){
        int spaceCounter = 0;
        while(spaceCounter < spaces){
            std::cout << " ";
            spaceCounter++;
        }
        for(int j = 0; j < stars; j++){
            std::cout << "*";
        }
        stars -= 2;
        spaces++;
        std::cout << "\n";
    }

}




/*
************
 **********
  ********
   ******
    ****
*/