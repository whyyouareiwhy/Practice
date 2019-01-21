//overload.h
#include <iostream>
#include <cstring>
using namespace std;

class Point
{
    private:
            int x;
            int y;
            char * color;

    public:
            Point();
            Point(int num1, int num2, const char * c);
            Point(const Point & copy);
            void display() const;
            Point sum(const Point & p) const;
            Point operator + (const Point & p) const;
            Point& operator += (const Point & p);
            Point& operator = (const Point & p);

            friend ostream& operator << (ostream& out, const Point & p);
            friend istream& operator >> (istream& in, Point & p);
};










