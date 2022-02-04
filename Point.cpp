#include "Point.hpp"


Point::Point(int x, int y, int z)
{
    coordinates[0] = x;
    coordinates[1] = y;
    coordinates[2] = z;
}

Point::~Point()
{

}

Point& Point::operator+=(Point const &point)
{
    for(std::size_t i {0} ; i < coordinates.size() ; i++)
    {
        coordinates[i] += point.coordinates[i];
    }
    return *this;
}

Point& Point::operator-=(Point const &point)
{
    for(std::size_t i {0} ; i < coordinates.size() ; i++)
    {
        coordinates[i] -= point.coordinates[i];
    }
    return *this;
}

Point operator+(Point lhs, Point const &rhs)
{
    lhs += rhs;
    return lhs;
}

Point operator-(Point lhs, Point const &rhs)
{
    lhs -= rhs;
    return lhs;
}

//*Methods
void Point::drawPoint() const //!DEBUG
{
    for(int const element : coordinates)
    {
        std::cout << element << std::endl;
    }
}