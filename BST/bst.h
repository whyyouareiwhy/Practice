//bst.h
#include <iostream>

struct node
{
    int data;
    node * left;
    node * right;

    node();
    node(int x);
    void display() const;
    node * insert(node * current, int x);
    node * new_node(int x);
};

class bst
{
    private:
        node * root;

    public:
        bst();
        bst(int x);
        //~bst();
        int insert(int x);
        int insert(node * current, int x);
        int remove(int match);
        int find(int match);
        void display() const;
        void display(node * current) const;
};

