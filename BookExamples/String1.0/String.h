// String.h -- Version 1 of string class
#include <iostream>
#ifndef STRING_H
#define STRING_H

class String
{
    private:
        char * str;                 // Ptr to string
        int len;
        // Only one copy of a 'static' variable is created regardless of the number of objects.
        static int num_strings;     // Number of string objects
    public:
        String();                   // Default constructor
        String(const char * s);     // Constructor
        ~String();
        String(const String & st);  // Copy constructor

        //String & String::operator=(const String &);
        friend std::ostream & operator<<(std::ostream & os, const String & st);
};

#endif
