#include "overload.h"
//using namespace std;

Point::Point()
        : x(0), y(0), color(nullptr)
{
    cout << "Default constructor" << endl;
}

Point::Point(int num1, int num2, const char * c)
        : x(num1), y(num2)
{
    cout << "Constructor with arg's" << endl;
    color = new char[strlen(c) + 1];
    strcpy(color, c);
}

Point::Point(const Point & copy)
{
    cout << "Copy constructor" << endl;
    x = copy.x;
    y = copy.y;
}

void Point::display() const
{
    cout << "(" << x << " , " << y << ")"  << "color: " << color << endl << endl;
}

Point Point::sum(const Point & p) const
{
    //x += p.x;
    //y += p.y;
    Point temp;
    temp.x = x + p.x;
    temp.y = y + p.y;
    return temp;
}
/*
Point Point::operator + (const Point & p) const
{
    Point temp;
    temp.x = x + p.x;
    temp.y = y + p.y;
    return temp;
}

Point& Point::operator += (const Point & p)
{
    //modifying then returning by ref
    x += p.x;
    y += p.y;
    return (*this);
}

Point & Point::operator = (const Point & p)
{
    if(x == p.x && y == p.y)
        return *this;
    x = p.x;
    y = p.y;
    return *this;
}

ostream& operator << (ostream& out, const Point & p)
{
    out << p.x << " " << p.y << endl;
}
*/

Point Point::operator + (const Point & p) const
{
    Point temp;
    temp.x = x + p.x;
    temp.y = y + p.y;
    temp.color = strcat(color, p.color);
    return temp;
}

Point& Point::operator = (const Point & p)
{
    if(x == p.x && y == p.y && color == p.color)
        return (*this); 
    x = p.x;
    y = p.y;
    color = new char[strlen(p.color) + 1];
    strcpy(color, p.color);
}

Point& Point::operator += (const Point & p)
{
    
}





























istream& operator >> (istream& in, Point & p)
{

}



























