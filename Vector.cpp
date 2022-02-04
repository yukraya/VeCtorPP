#include "Vector.hpp"

//*Constructors & Destrucotr
Vector::Vector(int vx, int vy, int vz)
{
    m_coordinates[1] = vx;
    m_coordinates[2] = vy;
    m_coordinates[3] = vz;
}

Vector::Vector(Point const &a, Point const &b)
{
    for(std::size_t i {0} ;i < m_coordinates.size() ; i++)
    {
        m_coordinates[i] =b.m_coordinates[i] - a.m_coordinates[i];
    }
}

Vector::~Vector()
{

}

//*Copy Assignment Operator
Vector& Vector::operator=(Vector const vector)
{
    for(std::size_t i {0} ; i < m_coordinates.size() ; i++)
    {
        m_coordinates[i] = vector.m_coordinates[i];
    }
    m_isNull = vector.m_isNull;
    return *this;
}


//*Methods
void Vector::drawVector() const
{
    for(int const element : m_coordinates)
    {
        std::cout << element << std::endl;
    }
}

bool Vector::isNull() const
{
    return m_isNull;
}