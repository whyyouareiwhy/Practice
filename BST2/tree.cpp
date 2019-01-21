//tree.cpp
#include "tree.h"


Node::Node()
        : data(0), left(nullptr), right(nullptr)
{}

Node::Node(int x)
        : data(x), left(nullptr), right(nullptr)
{}

void Node::display()
{
    //abcptr->display(); 
    cout << data << endl;
}

Tree::Tree()
        : root(nullptr)
{}

Node* Tree::insert(int x, Node* root)
{
    if(!root)
    {
       root = new Node(x); 
    }
    else if(x <= root->data)
        root->left = insert(x, root->left);
    else
        root->right = insert(x, root->right);
    return root;
}

void Tree::insert(int x)
{
    root = insert(x, root);
}

void Tree::display()
{
    if(!root)
        return;
    display(root);
}

void Tree::display(Node* root) const
{
    if(!root)
        return;
    //cout << root->data << endl;
    display(root->left);
    cout << root->data << endl;
    display(root->right); 
}

















