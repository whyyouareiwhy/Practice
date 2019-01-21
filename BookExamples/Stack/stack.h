// stack.h -- class definition fo the stack ADT
#ifndef STACK_H
#define STACK_H

typedef unsigned long Item; // Make Item the same as 'unsigned long'. Can be changed as necessary (double, int, etc)

class Stack
{
    private:
        enum {MAX = 10};    // constant specific to class
        Item items[MAX];    // Array that holds stack 'items'
        int top;            // index for top of Stack

    public:
        Stack();
        bool isEmpty() const; // using const is promising that invoking (implicit) object won't be altered
        bool isFull() const;  // ...
        bool push(const Item & item);   // Return false if Stack is full. Add item to Stack (without altering it)
        bool pop(Item & item);          // Return false if Stack is empty. Pop top into item
};
#endif
