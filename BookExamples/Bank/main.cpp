// main.cpp
#include <iostream>
#include "brass.h"

int main()
{
    using std::cout;
    using std::endl;

    Brass Piggy("Porcelot Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);
    Piggy.ViewAcct();
    cout << endl;
    Hoggy.ViewAcct();
    cout << endl;
    cout << "depositing $1000 into Hogg acct" << endl;
    Hoggy.Deposit(1000);
    cout << "new balance: $" << Hoggy.Balance() << endl;
    cout << "withdrawing $4200 from Pigg acct" << endl;
    Piggy.Withdraw(4200);
    cout << "Pigg balance: " << Piggy.Balance() << endl;
    cout << "withdrawing $4200 from Hoggy" << endl;
    Hoggy.Withdraw(4200);
    Hoggy.ViewAcct();
    
    return 0;
}
