#include <iostream>

#include "Point.hpp"

int main(/*int argc, char const *argv[]*/)
{
    Point p1(5, 2, 3);
    Point p2(2, 4, 9);
    Point p3 (p2 - p1);

    p3.drawPoint();

    std::cout << "Hello World!" << std::endl;
    return 0;
}