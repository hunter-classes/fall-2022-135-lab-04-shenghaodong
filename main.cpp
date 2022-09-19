#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"

int main(){
    std::cout << "Task 1: \n" << std::endl;
    std::cout << "Shape: \n";
    makeBox(7, 4);

    std::cout << "Task 2: \n" << std::endl;
    std::cout << "Shape: \n";
    makeCheckerboard(11, 6);

    std::cout << "Task 3: \n" << std::endl;
    std::cout << "Shape: \n";
    makeCross(10);

    std::cout << "Task 4: \n" << std::endl;
    std::cout << "Shape: \n";
    makeLowerTriangle(6);

    std::cout << "Task 5: \n" << std::endl;
    std::cout << "Shape: \n";
    makeUpperTriangle(9);

    return 0;
}