#include <iostream>


//idea: make counter that counts from 1-6 (resets after) this can help alternate the spaces (this might make the code really long cause needs 2 loops)
//maybe also need a count for stars since theres also a space after 3 stars are placed
void make3x3(int width, int height){
   int counter = 0;
   int stars = 0;
   int spaces = 0;
   int num = 0;
    for(int i = 0; i < height; i++){
      if(counter == 6){
         counter = 0;
      }
      counter++;
      if(counter <= 3){
         for(int x = 0; x < width; x++){
            if(stars < 3){//problem within the if statements
               std::cout << "*";
               stars++;
            }else if(stars >= 3 && spaces < 3){
               std::cout << " ";
               spaces++;
            }
            if(stars == 3 & spaces == 3){
               stars = 0;
               spaces = 0;
            }
         }
      }else if(counter > 3){//if count is 4-6
         for(int y = 0; y < width; y++){
            if(spaces < 3){
               std::cout << " ";
               spaces++;
            }else if(spaces >= 3 && stars < 3){
               std::cout << "*";
               stars++;
            }
            if(stars == 3 & spaces == 3){
               stars = 0;
               spaces = 0;
            }
         }
      }
      std::cout << "\n";
      stars = 0;
      spaces = 0;
    } 
}


/*
***   ***   *** 
***   ***   ***
***   ***   ***
   ***   ***   *
   ***   ***   *
   ***   ***   *
***   ***   ***
***   ***   ***
***   ***   ***
   ***   ***   *
   ***   ***   *

format:
changes every 3
1
2
3
 4
 5
 6
7
8
*/