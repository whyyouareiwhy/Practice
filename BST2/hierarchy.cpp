//hierarchy.cpp
#include "hierarchy.h"

Base::Base()
        : gluten(false)
{}

Base::Base(bool g)
        : gluten(g)
{}

void Base::display()
{}

Derived::Derived()
        : Base(), name(nullptr)
{}

Derived::Derived(char* n)
        : Base()
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

void Derived::display()
{
    cout << name << endl;
}
