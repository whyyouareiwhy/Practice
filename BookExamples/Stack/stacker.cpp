// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype>
#include "stack.h"

/*
 *
 */

int main()
{
    using namespace std;

    Stack st;   // new stack
    char ch;    // answer
    unsigned long po;

    cout << "Enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";

    while(cin >> ch && toupper(ch) != 'Q')
    {
        while(cin.get() != '\n')
                continue;
        if(!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a': cout << "Enter a PO number to add: ";
                      cin >> po;
                      if(st.isFull())
                              cout << "Stack is full\n";
                      else
                              st.push(po);
                      break;
            case 'P':
            case 'p': if(st.isEmpty())
                              cout << "Stack is empty\n";
                      else 
                      {
                              st.pop(po);
                              cout << "PO #" << po << " popped\n";
                      }
                      break;
        }
        cout << "Enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    } 
    cout << "End\n";   
    return 0;
}
