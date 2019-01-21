// stack.cpp -- Stack class member functions
#include "stack.h"

Stack::Stack()
{
    top = 0;
}

bool Stack::isEmpty() const
{
    return top == 0;
}

bool Stack::isFull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item)
{
    if(top < MAX)
    {
            items[top++] = item;    // set next element to arg item
            return true;
    }
    else
            return false;
}

bool Stack::pop(Item & item)
{
    if(top > 0)
    {
            item = items[--top];    // back up 1 spot in Array
            return true;
    }
    else
            return false;
}
