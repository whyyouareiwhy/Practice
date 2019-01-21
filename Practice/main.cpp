#include <iostream>
#include <string.h>
using namespace std;

class marker
{
    public:

    protected:

};

class road : public marker
{
    public:

    protected:

};

int main(void)
{
    /*
    int * road = new int[10];
    for(int i = 0; i < 10; ++i)
        road[i] = i * 2;

    for(int i = 0; i < 10; ++i)
        cout << road[i] << endl;
   
    delete [] road;
    */
    
    //arrays
    double wages[3] = { 10000.0, 20000.0, 30000.0 };
    short stacks[3] = { 3, 2, 1 };

    //pointers
    double * pw = wages;
    short * ps = &stacks[0]; 

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "added 1 to the pointer (pw = pw + 1)" << endl;
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    
    cout << "Access two elements with array notation:\n";
    cout<< "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
    cout << "Access two elements with pointer notation:\n";
    cout << "*stacks =  " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;

    return 0;
}
















