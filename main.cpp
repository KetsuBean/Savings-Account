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
    void openAccount(int, int);
    void makeDeposit(int, int);
    void makeWithdrawal(int, int);
    void checkBalance();
};

int main() {
    
    return 0;
}
