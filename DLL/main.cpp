#include <iostream>
using namespace std;

class Node
{
    protected:
            int data;
            Node * next;
            Node * prev;
    public:
            Node();
            Node(int d);
            Node *& get_next();
            Node *& get_prev();
            void set_next(Node * np);
            void set_prev(Node * pp);
            void display() const;
            int read(int n);
};

Node::Node()
        : data(0)
{}

Node::Node(int d)
        : data(d)
{}

Node *& Node::get_next()
{
    return next;
}

Node *& Node::get_prev()
{
    return prev;
}

void Node::set_next(Node * np)
{
    next = np;
}

void Node::set_prev(Node * pp)
{
    prev = pp;
}

void Node::display() const
{
    if(data)
        cout << data << endl;
}

int Node::read(int n)
{
    data = n;
}

class DLL
{
    protected:
            Node * head;
            Node * tail;
    public:
            DLL();
            void insert(int n);
            void remove();
            int display();
            int display(Node * h);
};

DLL::DLL()
        : head(NULL), tail(NULL)
{}

void DLL::insert(int n)
{
    // Empty list
    if(!head)
    {
        head = new Node(n);
        //head->read(n);
        head->set_next(NULL);
        head->set_prev(NULL);
        tail = head;
    }
    // Single item
    else
    {
        Node * temp = new Node(n);
        tail->set_next(temp);
        temp->set_prev(tail);
        temp->set_next(NULL);
        tail = temp;
        //tail->set_next(temp); 
        /* 
        temp->set_prev(head->get_next());
        temp->set_next(NULL);
        head->set_next(temp);
        tail = temp;
        */
    }
}

void DLL::remove()
{

}

int DLL::display()
{
    if(!head)
    {
        cout << "empty list" << endl;
        return 0;
    }
    display(head);
}

int DLL::display(Node * h)
{
    if(!h)
        return 0;
    h->Node::display();
    h = h->get_next();
    display(h);
}

int main()
{
    
    DLL test;
    test.insert(1);
    test.insert(2);
    test.insert(3);
    test.display();

    /*
    Node test(2);
    test.read(1);
    test.display();
    */





    return 0;
}
