#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"

int main(){
    std::cout << "Task A: \n" << std::endl;
    std::cout << "Shape: \n";
    makeBox(7, 4);

    std::cout << "Task B: \n" << std::endl;
    std::cout << "Shape: \n";
    makeCheckerboard(11, 6);

    std::cout << "Task C: \n" << std::endl;
    std::cout << "Shape: \n";
    makeCross(10);

    std::cout << "Task D: \n" << std::endl;
    std::cout << "Shape: \n";
    makeLowerTriangle(6);

    std::cout << "Task E: \n" << std::endl;
    std::cout << "Shape: \n";
    makeUpperTriangle(9);

    std::cout << "Task F: \n" << std::endl;
    std::cout << "Shape: \n";
    makeTrap(12, 7);

    std::cout << "Task G: \n" << std::endl;
    std::cout << "Shape: \n";
    make3x3(16, 11);

    return 0;
}