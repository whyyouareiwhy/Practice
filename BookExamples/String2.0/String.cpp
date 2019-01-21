// String.cpp -- String class member functions.
#include <cstring>
#include "String.h"
using std::cout;

/*
 *      Constructors and other methods
 */

String::String()
{
    len = 0;
    str = new char[1];      // This form compatible with destructor
    str[0] = '\0';          // Default string
}

String::String(const char * s)
{
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    num_strings++;
}

String::String(const String & st)
{
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    num_strings++;
}

String::~String()
{
    delete [] str;
    --num_strings;
}

/*
 *      Overloaded operator methods
 */

// String to a string.
String & String::operator=(const String & st)
{
    // Check that address are different
    if(this == &st)
          return *this;         // Return ref to calling object

    delete [] str;
    len = st.len; 
    str = new char[len + 1];
    strcpy(str, st.str);
    return *this;
}

// C style string to a string
String & String::operator=(const char * s)
{
    delete [] str;
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    return *this;
}

// Read-write char access for non-const String
char & String::operator[](int i)
{
    return str[i];
}

// Read only char access for const String
const char & String::operator[](int i) const
{
    return str[i];
}

/*
 *      Overloaded operator friends
 */

bool operator<(const String &st1, const String &st2)
{
    return (strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
    return (strcmp(st1.str, st2.str) == 0);
}

// String output
ostream & operator<<(ostream & os, const String &st)
{
    os << st.str;
    return os;
}

// String input
istream & operator>>(istream & is, String &st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if(is)
            st = temp;
    while(is && is.get() != '\n')
            continue;
    return is;
}

/*
 *      Static function
 *

int String::howMany()
{
    return num_strings;
}

*/
















