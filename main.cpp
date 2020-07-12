// This program emulates a savings account in which you can deposit, withdrawal, open account,
// and check balance
//
//Kevin Dao
//COURSE: CMPR 121 Section #68719
//Week 4 Lab 13.5
//

#include <iostream>

using namespace std;

class SavingsAccount {
private:
    int dollars;
    int cents;
    
public:
    void makeDeposit(int, int);
    void makeWithdrawal(int, int);
    void checkBalance();
    SavingsAccount();
    SavingsAccount(int, int);
    ~SavingsAccount();
};

int main() {
    
    int dollars, cents;
    char choice;
    
    cout << "Please input the initial dollars\n";
    cin >> dollars;
    cout << "Please input the inital cents\n";
    cin >> cents;
    
    SavingsAccount bank1(dollars, cents);
    SavingsAccount bank2;
    
    int i = 0;
    
    do {
        
    
    do {
        cout << "Would you like to make a deposit or withdrawal?"
        << endl << "Type D for deposit | W for withdrawal | N for exit"
        << endl;
        cin >> choice;
        
        switch (choice) {
            case 'D':
            case 'd':
            case 'W':
            case 'w':
            case 'N':
            case 'n':
                i = -1;
                break;
                
            default:
                i = 0;
                break;
        }
        
    } while (i != -1);
    
    switch (choice) {
        case 'D':
        case 'd':
            cout << "Please input dollars to deposit" << endl;
            cin >> dollars;
            cout << "Please input cents to deposit" << endl;
            cin >> cents;
            bank1.makeDeposit(dollars, cents);
            cout << "Deposit complete" << endl;
            bank1.checkBalance();
            break;
            
        case 'W':
        case 'w':
            cout << "Please input dollars to withdrawal" << endl;
            cin >> dollars;
            cout << "Please input cents to withdrawal" << endl;
            cin >> cents;
            bank1.makeWithdrawal(dollars, cents);
            cout << "Withdrawal complete" << endl;
            bank1.checkBalance();
            break;
            
        default:
            i = -2;
            cout << "Bank 1\n";
            bank1.checkBalance();
            cout << "Bank 2\n";
            bank2.checkBalance();
            break;
    }
    
        } while (i != -2);
    return 0;
}

SavingsAccount::SavingsAccount()
{
    dollars = 0;
    cents = 0;
}

SavingsAccount::SavingsAccount(int d, int c)
{
    dollars = d;
    cents = c;
}

SavingsAccount:: ~SavingsAccount()
{
    
}

void SavingsAccount::makeDeposit(int d, int c)
{
    while (c >= 100) {
        c -= 100;
        d += 1;
    }
    
    dollars += d;
    cents += c;
    
}

void SavingsAccount::makeWithdrawal(int d, int c)
{
    while (c >= 100) {
        c -= 100;
        d += 1;
    }
    
    dollars -= d;
    cents -= c;
}

void SavingsAccount::checkBalance()
{
    cout << "Dollars = " << dollars << "\tCents = " << cents << endl;
}
