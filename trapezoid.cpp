#include <iostream>
//add a impossible shape!!
//Lowest on the bottom should be 4 stars. If it goes to 2 stars or under then it is considered a impossible shape
void makeTrap(int width, int height){
    int spaces = 0;
    int stars = width;
    bool canRun = true;
    for(int x = 0; x < height; x++){
        stars-=2;
        spaces++;
    }
    if(stars == -2){
        canRun = false;
        std::cout << "Impossible" << std::endl;
    }
    stars = width;
    spaces = 0;
    if(canRun == true){
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
}




/*
************
 **********
  ********
   ******
    ****
*/