// mammal.h
#include <iostream>
using namespace std;

class Mammal
{
    protected:
        int weight;
    public:
        Mammal();
        Mammal(int w); 
        virtual void display() const;
};

class Feline : public Mammal
{
    protected:
       int age; 
    public:
        Feline();
        Feline(int a);
        Feline(int w, int a);
        void display() const;
};

class Cat : public Feline
{
    protected:
        char * color;
    public:
        Cat();
        Cat(char * col);
        Cat(char * col, int a);
        Cat(int w, int a, char * col);
        Cat(const Cat &);               //Copy constrcuctor
        void display() const;
};
/*
class Canine : public Mammal
{
    protected:

    public:
        Canine();
        void display() const;
};

class Dog : public Canine
{

};
*/
