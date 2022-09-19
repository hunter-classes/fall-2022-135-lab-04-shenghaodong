/*
Example:
*****
 ****
  ***
   **
    *
*/
#include <iostream>

void makeUpperTriangle(int length){
    int count = length;
    int indent = 0;
    for(int i = 0; i < length; i++){
        for(int x = 0; x < indent; x++){
            std::cout << " ";
        }
        for(int j = 0; j < count; j++){
            std::cout << "*";
        }
        std::cout << "\n";
        indent++;
        count--;
    }
}