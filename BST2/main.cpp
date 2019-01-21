//main.cpp
//#include "tree.h"
#include "hierarchy.h"

int main(void)
{
    
    Tree bst;
    /* 
    Base* ptr;
    char s[] = "string";
    //cout << s << endl;
    ptr = new Derived(s);
    ptr->display();
    */

    Node test(1);
    //test.display();
    bst.insert(10);
    bst.insert(5);
    bst.insert(15);
    bst.insert(1);
    bst.display();




    return 0;
}
