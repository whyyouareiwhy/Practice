// brass.cpp -- Brass class methods
#include <iostream>
#include "brass.h"
using std::cout;
using std::endl;
using std::string;

/*
 *                               *** Brass ***
 */

Brass::Brass(const string & s, long an, double bal) :
        fullName(s), acctNum(an), balance(bal)
{}

void Brass::Deposit(double amt)
{
    if(amt < 0)
        cout << "negative amount\n";
    else
        balance += amt;
}

void Brass::Withdraw(double amt)
{
    if(amt < 0)
            cout << "negative amount\n";
    else if(amt <= balance)
            balance -= amt;
    else
            cout << "exceeds balance amount\n";
}

double Brass::Balance() const
{
    return balance;
}

void Brass::ViewAcct() const
{
    cout << "Client: " << fullName << endl;
    cout << "Account Number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
}

/*
 *                              *** BrassPlus ***
 */

BrassPlus::BrassPlus(const string & s, long an, double bal, double ml, double r)
        : Brass(s, an, bal), maxLoan(ml), rate(r), owesBank(0.0)
{}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
        : Brass(ba), maxLoan(ml), rate(r), owesBank(0.0)
{}

void BrassPlus::ViewAcct() const
{
    Brass::ViewAcct();
    cout << "Max loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout << "Loan rate: " << 100 * rate << "%\n";

}

void BrassPlus::Withdraw(double amt)
{
    double bal = Balance();
    if(amt <= bal)
        Brass::Withdraw(amt);
    else if(amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        Brass::Withdraw(amt); 
    }
    else
        cout << "Credit limit exceeded.\n";
}












