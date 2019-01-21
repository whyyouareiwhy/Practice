// main.cpp
#include "mammal.h"
//#include <iostream>
#include <string.h>
//using namespace std;

int main()
{
    
    char str[] = "black";
    char * test = new char[strlen(str) + 1];
    strcpy(test, str);
    //cout << test << endl; 

    //Cat cat;
    //cat.display();
    Mammal * base[3];
    base[0] = new Cat(str);
    base[1] = new Cat(str, 3);
    base[2] = new Cat(10, 13, str);

    for(int i = 0; i < 3; ++i)
    {
        base[i]->display();
    } 
  
   /* 
    Cat cat1("white"); 
    base * ptr = cat1;
    ptr->display();
    */
    Cat cast;
    Mammal * b_ptr = &cast;
    Cat * c_ptr;
    c_ptr = dynamic_cast<Cat*>(b_ptr);
    c_ptr->display();

    cout << "---------------------------------------" << endl;
    Cat test_cat(5,5,str);
    Cat test_cat2(test_cat);
    test_cat2.display();
    cout << "---------------------------------------" << endl;

    return 0;
}
