// String.cpp -- Implementation of String class
#include <cstring>
#include "String.h"
using std::cout;

// Initialize static class member
int String::num_strings = 0;

String::String()
{
    len = 4;
    str = new char[4];
    strcpy(str, "C++");
    ++num_strings;
    cout << num_strings << ": " << str << "    *default object created*\n";
}

String::String(const char * s)
{
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    strcpy(str, s);
    ++num_strings;
    cout << num_strings << ": " << str << "    *default object created*\n";
}

String::~String()
{
    cout << ": " << str << "    $object deleted$, ";
    --num_strings;
    cout << num_strings << " left\n";
    delete [] str;
}

// Copy costructor
String::String(const String & st)
{
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    ++num_strings;
    cout << num_strings << ": " << str << "    *default object created*\n";

}

/*
 * To ensure deep copying, the '=' is rewritten as an assignment operator.
 * A new object is NOT created so 'num_strings' isn't modified.
 *
 
String & String::operator=(const String & st)
{
    // Prevent assignment to itself so result can be used as arg.
    // Checks addr of rhs against calling object
    if(this == &st)
            return *this;

    delete [] str;          // Clear out previous string.
    len = st.len;
    str = new char [len + 1];
    strcpy(str, st.str);
    return *this;           // Return reference to invoking object.
}
*/

std::ostream & operator<<(std::ostream & os, const String & st)
{
    os << st.str;
    return os;
}

