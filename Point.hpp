#ifndef POINT_HPP
#define POINT_HPP

#include <iostream> //!DEBUG

#include <array>

class Point
{
    friend class Vector;
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
        const int& x() const;
        const int& y() const;
        const int& z() const;

        void drawPoint() const; //!DEBUG
    private:
        //*Integrated Methods

        //*Attributess
        std::array<int, 3> m_coordinates;
};

#endif //POINT_HPP