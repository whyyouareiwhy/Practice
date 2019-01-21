// String.h -- A better version of the String class
#ifndef STRING_H
#define STRING_H
#include <iostream>
using std::ostream;
using std::istream;

class String
{
    private:
        char * str;
        int len;
        static int num_strings;
        static const int CINLIM = 80;
    public:
    // Constructors and other methods
        String();
        String(const char * s);
        String(const String &);         // Copy constructor
        ~String();
        int length () const { return len; }
    // Overloaded operator methods
        String & operator=(const String &);
        String & operator=(const char *);
        char & operator[](int i);
        const char & operator[](int i) const;
    // Overloaded operator friends
        friend bool operator<(const String &st1, const String &st2);
        friend bool operator>(const String &st1, const String &st2);
        friend bool operator==(const String &st1, const String &st2);
        friend ostream & operator<<(ostream & os, const String &st);
        friend istream & operator>>(istream & is, String &st);
    // Static function
        static int howMany() { return num_strings; }

};

#endif
