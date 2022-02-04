#include <iostream>

#include "Vector.hpp"

int main(/*int argc, char const *argv[]*/)
{
    Point A(5, 2, 3);
    Point B(2, 4, 9);

    Vector v1(A, B);

    v1.drawVector();

    return 0;
}