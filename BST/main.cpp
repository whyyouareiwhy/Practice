#include "bst.h"
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
    bst tree;
    tree.insert(5);
    tree.insert(15);
   
    tree.display(); 
    //test.display();
    //test2.display();

    cout << endl;    
    return 0;
}

