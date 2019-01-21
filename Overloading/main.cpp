//main.cpp
#include "overload.h"

int main()
{
    char r[] = "red";
    char b[] = "blue ";
    Point one(1, 2, r);
    Point two(10, 11, b);
    Point three;
    one.display();
    cout << "----------------------------------" << endl;

    //three = two;
    three = one;
    //one += two;
    //cout << one << endl;
    //three = one.sum(two);
    cout << "one :";
    one.display();
    cout << "two :";
    two.display();
    cout << "three: ";
    three.display();
    cout << endl;
    //cout << "four: ";
    //four.display();


    return 0;
}
