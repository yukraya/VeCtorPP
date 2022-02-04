#include "Point.hpp"


//*construcotrs & Destructors
Point::Point(int x, int y, int z)
{
    m_coordinates[0] = x;
    m_coordinates[1] = y;
    m_coordinates[2] = z;
}

Point::~Point()
{

}

//*Integrated Assignment Operators
Point& Point::operator+=(Point const &point)
{
    for(std::size_t i {0} ; i < m_coordinates.size() ; i++)
    {
        m_coordinates[i] += point.m_coordinates[i];
    }
    return *this;
}

Point& Point::operator-=(Point const &point)
{
    for(std::size_t i {0} ; i < m_coordinates.size() ; i++)
    {
        m_coordinates[i] -= point.m_coordinates[i];
    }
    return *this;
}

Point operator+(Point lhs, Point const &rhs) //Friendly
{
    lhs += rhs;
    return lhs;
}

Point operator-(Point lhs, Point const &rhs) //Friendly
{
    lhs -= rhs;
    return lhs;
}

//*Methods
void Point::drawPoint() const //!DEBUG
{
    for(int const element : m_coordinates)
    {
        std::cout << element << std::endl;
    }
}

const int& Point::x() const
{
    return m_coordinates[0];
}

const int& Point::y() const
{
    return m_coordinates[1];
}

const int& Point::z() const
{
    return m_coordinates[2];
}