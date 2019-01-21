//main.cpp
#include "list.h"
#include <iostream>
using namespace std;

int main()
{
    node test(4); 
    test.display();

    cout << "\n---------------------------------" << endl;

    list obj(5);
    obj.display();

    obj.insert_beginning(10);
    obj.insert_beginning(15);
    obj.insert_end(30);
    obj.display();






    return 0;
}
