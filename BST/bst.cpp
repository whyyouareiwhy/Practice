//bst.cpp
#include "bst.h"
using std::cout;
using std::endl;

bst::bst()
        : root(nullptr)
{}

bst::bst(int x)
{
    if(!root)
        root = new node(x);
}

int bst::insert(int x)
{
    if(!root)
        root = new node(x);
    else if(x < root->data)
        insert(root->left, x); 
    else
        insert(root->right, x);
        
}

int bst::insert(node * current, int x)
{
    if(!root)
    {
        root = new node(x); 
    }
}

int bst::remove(int match)
{

}

int bst::find(int match)
{

}

void bst::display() const
{
    if(!root)
        return;
    display(root);
}

void bst::display(node * current) const
{
    if(!root)
        return;
    display(root->left);
    root->display();
    display(root->right);
}

node::node()
        : data(0), left(nullptr), right(nullptr)
{}

node::node(int x)
        : data(x), left(nullptr), right(nullptr)
{}

void node::display() const
{
    cout << data << " ";
}

node * node::insert(node * current, int x)
{
    if(!current)
        current = new node;
    else if(x < current->data)
        current->left = insert(current->left, x);
    else
        current->right = insert(current->right, x);
   
    //The node pointer is returned unchannged 
    return current;
}

node * node::new_node(int x)
{
    node * temp = new node(x);
    return temp;
}






















