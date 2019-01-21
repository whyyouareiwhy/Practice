// main.cpp -- Run the 2.0 version of the String class
// Chapter 12 example
#include <iostream>
#include "String.h"
const int arraySize = 10;
const int maxLen = 81;

/*
 * Not working. Something wrong with the 'static int num_strings' var in String.h.
 */


int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    String name;

    cout << "What's your name?\n: ";
    cin >> name;
    //cin.ignore(100, '\n');

    cout << name << endl;
    

    return 0;
}
