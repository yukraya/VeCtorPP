#ifndef POINT_HPP
#define POINT_HPP

#include <iostream> //!DEBUG

#include <array>

class Point
{
    public:
        //*Construcotrs & Destructors
        explicit Point(int x, int y = 0, int z = 0);
        Point(Point const &point) = default;
        ~Point();

        //*Integrated Assignment Operators
        Point& operator+=(Point const &point);
        Point& operator-=(Point const &point);

        friend Point operator+(Point lhs, Point const &rhs);
        friend Point operator-(Point lhs, Point const &rhs);

        //*Methods
        void drawPoint() const; //!DEBUG
    private:
        //*Integrated Methods

        //*Attributes
        std::array<int, 3> coordinates;
};

#endif //POINT_HPP