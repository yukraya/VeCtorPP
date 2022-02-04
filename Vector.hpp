#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "Point.hpp"

class Vector
{
    public:
        //*Construcotrs & Destrucotrs
        explicit Vector(int vx = 0, int vy = 0, int vz = 0);
        explicit Vector(Point const &a, Point const &b);
        Vector(Vector const &vector) = default;
        ~Vector();

        //*Copy Assignement Operator
        Vector& operator=(Vector const vector);

        //*Methods
        void drawVector() const; //!DEBUG
        bool isNull() const;

        //*Friendly Functions
        friend float vectorProduct(Vector const &lhs, Vector const &rhs);
    private:
        //*Attributes
        std::array<int, 3> m_coordinates;
        bool m_isNull;
};

#endif //VECTOR_HPP