// main.cpp -- Run string class program.
#include <ostream>
#include "String.h"
using std::cout;
using std::endl;

void callMe1(String &);
void callMe2(String);

int main()
{
    {
        cout << "Starting inner block\n";
        String headline1("Celery stalks at midnight");
        String headline2("Lettuce prey");
        String sports("Spinach leaves bowl for dollars");        

        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;
        callMe1(headline1);
        cout << "headline1: " << headline1 << endl;
        callMe2(headline2);
        cout << "headline2: " << headline2 << endl;
        cout << "Initialize one object to another:\n";
        String sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:\n";
        String knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";
    } 
    cout << "End of main\n";
    return 0;
}

void callMe1(String & rsb)
{
    cout << "String passed by reference:\n";
    cout << "    /" << rsb << "\"" << endl;
}

void callMe2(String sb)
{
    cout << "Copy constructor used:\n";
    cout << "    /" << sb << "\"" << endl;
}










