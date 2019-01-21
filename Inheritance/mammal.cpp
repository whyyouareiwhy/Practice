// mammal.cpp
#include "mammal.h"
#include <string.h>

Mammal::Mammal()
        : weight(0)
{}

Mammal::Mammal(int w)
        : weight(w)
{}

void Mammal::display() const
{
    cout << "Weight: " << weight << endl;
}

//***********************************************************

Feline::Feline()
        : Mammal(), age(0)
{}

Feline::Feline(int a)
        : Mammal(), age(a)
{}

Feline::Feline(int w, int a)
        : Mammal(w), age(a)
{}

void Feline::display() const
{
    //cout << "Weight: " << weight << " ";
    Mammal::display();
    cout << "Age: " << age << endl;
}

//**********************************************************

Cat::Cat()
        : Feline()
{
    char str[] = "none";
    color = new char[strlen(str) + 1];
    strcpy(color, str);
}

Cat::Cat(char * col)
        : Feline()
{
    color = new char[strlen(col) + 1];
    strcpy(color, col);
}

Cat::Cat(char * col, int a)
        : Feline(a)
{
    color = new char[strlen(col) + 1];
    strcpy(color, col);
}

Cat::Cat(int w, int a, char * col)
        : Feline(w, a)
{
    color = new char[strlen(col) + 1];
    strcpy(color, col);
}

Cat::Cat(const Cat & source)
        : Feline(source)
{
    color = new char[strlen(source.color) + 1];
    strncpy(color, source.color, strlen(source.color));
}

void Cat::display() const
{
    cout << "Cat:" << endl;
    Feline::display();
    //cout << "Weight: " << weight  << " " << "Age: " << age << " ";
    cout << "Color: " << color << endl << endl;
}

//*************************************************************
/*
Canine::Canine()
{

}
*/








