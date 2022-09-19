#include <iostream>
//indents in the beginning and between the *
//indents increase by 1 until the there is no gap in the middle then
//starts decreasing by 1
void makeCross(int size){
    int indentCounter = 0;
    int counter = size - 2;

    //runs for the amount size is
    for(int i = 0; i < size; i++){
        //make a half point maybe?
        int halfPoint = size/2;
        if(i <= halfPoint){
            //first half of cross
            for(int x = 0; x < indentCounter; x++){
                std::cout << " ";
            };
            std::cout << "*";
            for(int a = counter; a > 0; a--){
                //do the indents
                std::cout << " ";
            }
            if(counter > 0){
                counter -= 2;
            }       
            std::cout << "*\n";
            if(indentCounter != halfPoint - 1){
                indentCounter++;
            }  
        }else{
            //second half of cross
            indentCounter--;
            for(int y = indentCounter; y > 0; y--){
                std::cout << " ";
            }
            std::cout << "*";
            counter +=2;
            for(int b = 0; b < counter; b++){
                //do the indents (might need another loop for the other spaces in middle)
                std::cout << " ";
            }
            std::cout << "*\n";

        }
    }
}