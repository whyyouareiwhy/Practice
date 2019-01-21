// main.cpp -- A frogger game
#include <iostream>
#include "classes.h"

int main()
{
    Lane lane1(20);
    for(int i = 0; i < 20; i++)
    {
        if(lane1.checkPos(i))
            cout << "1";
        else
            cout << "0";
    }
    lane1.Move();
    cout << endl;
    for(int i = 0; i < 20; i++)
    {
        if(lane1.checkPos(i))
            cout << "1";
        else
            cout << "0";
    }
    lane1.Move();
    lane1.Move();
    lane1.Move();
    cout << endl;
    for(int i = 0; i < 20; i++)
    {
        if(lane1.checkPos(i))
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;

    return 0;
}
