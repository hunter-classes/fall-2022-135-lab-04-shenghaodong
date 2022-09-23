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
    std::cout << "makeBox(7, 4): \n";
    makeBox(7, 4);
    std::cout << "\n";
    std::cout << "makeBox(3, 9): \n";
    makeBox(3, 9);
    std::cout << "\n------------------\n";

    std::cout << "\nTask B: \n" << std::endl;
    std::cout << "makeCheckerboard(11, 6): \n";
    makeCheckerboard(11, 6);
    std::cout << "\n";
    std::cout << "makeCheckerboard(2, 7): \n";
    makeCheckerboard(2, 7);
    std::cout << "\n------------------\n";

    std::cout << "\nTask C: \n" << std::endl;
    std::cout << "makeCross(10): \n";
    makeCross(10);
    std::cout << "\n";
    std::cout << "makeCross(4): \n";
    makeCross(4);
    std::cout << "\n------------------\n";

    std::cout << "\nTask D: \n" << std::endl;
    std::cout << "makeLowerTriangle(6): \n";
    makeLowerTriangle(6);
    std::cout << "\n";
    std::cout << "makeLowerTriangle(3): \n";
    makeLowerTriangle(3);
    std::cout << "\n------------------\n";
    

    std::cout << "\nTask E: \n" << std::endl;
    std::cout << "makeUpperTriangle(9): \n";
    makeUpperTriangle(9);
    std::cout << "\n";
    std::cout << "makeUpperTriangle(12): \n";
    makeUpperTriangle(12);
    std::cout << "\n------------------\n";

    std::cout << "\nTask F: \n" << std::endl;
    std::cout << "makeTrap(12, 5) \n";
    makeTrap(12, 5);
    std::cout << "\n";
    std::cout << "makeTrap(12, 7) \n";
    makeTrap(12, 7);
    std::cout << "\n------------------\n";

    std::cout << "\nTask G: \n" << std::endl;
    std::cout << "make3x3(16,11): \n";
    make3x3(16, 11);
    std::cout << "\n";
    std::cout << "make3x3(27, 27): \n";
    make3x3(27, 27);

    return 0;
}