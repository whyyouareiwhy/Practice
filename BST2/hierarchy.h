//hierarchy.h
#include "tree.h"

class Base
{
    protected:
        bool gluten; 
    public:
        Base();
        Base(bool g);
        virtual void display() = 0;
};

class Derived : public Base
{
    protected:
        char * name;
    public:
        Derived();
        Derived(char* n);
        void display();
};

/*
class Node
{
    protected:
        Base* abcptr;
    public:
        Node();
};
*/
