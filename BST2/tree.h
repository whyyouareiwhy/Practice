//tree.h

#include <iostream>
#include <string.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;

        Node();
        Node(int x);
        void display();
};

class Tree
{
    private:
        Node* root;
        Node* insert(int x, Node* root);
    public:
        Tree();
        //~Tree();
        void insert(int x);
        void display();
        void display(Node* root) const;
};
