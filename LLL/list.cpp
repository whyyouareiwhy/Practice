#include "list.h"
#include <iostream>
using namespace std;

node::node()
        : data(0)
{}

node::node(int x)
        : data(x)
{}

void node::display() const
{
    cout << data << " ";
}

list::list()
        : head(nullptr)
{}

list::list(int x)
{
    head = new node(x);
}

void list::insert_beginning(int x)
{
    //insert_beginning(head, x); 
    if(!head)
    {
        head = new node(x);
        head->next = nullptr;
    }
    else
    {
        node * temp = new node(x);
        temp->next = head;
        head = temp;
    }
    
}
/* //Able to access int first insert_beginning()
void list::insert_beginning(node *& current, int x)
{
    if(!current)
    {
        current = new node(x);
        current->next = nullptr;
    }
    else
    {
        node * temp = new node(x);
        temp->next = current;
        current = temp;
    }
}
*/

//wrapper (since you must traverse to end of list)
void list::insert_end(int x)
{
    if(!head)
    {
        head = new node(x);
        head->next = nullptr;
    }
    insert_end(head, x); 
}

//Recursive call
void list::insert_end(node *& current, int x)
{
    if(!current)
    {
        current = new node(x);
        current->next = nullptr; 
        return; //Seg fault if no return
    }
    insert_end(current->next, x);
}

int search(int n)
{
    
}

int list::remove(int n)
{
    
}

//wrapper for display()
void list::display() const
{
    if(!head)
    {
        cout << "empty list" << endl;
        return;
    }
   display(head); //node's display
   cout << endl;
}

//recursive display() call
void list::display(node * current) const
{
    if(!current)
        return;
    current->display();
    display(current->next);
}



























