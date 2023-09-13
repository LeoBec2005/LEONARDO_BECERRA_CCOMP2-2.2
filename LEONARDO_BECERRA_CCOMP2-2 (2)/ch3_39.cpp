#include <iostream>
#include "ch3_39.h"
using namespace std;
int main()
{
Account account1{"Jane Green", 50};
Account account2{"John Blue", -7};

cout << "accountl:"<< account1.getName () << "balance is S"
    << account1. getBalance();
cout << "\naccount2: " << account2.getName () << " balance is S"
    << account2. getBalance();

cout << "\n\nEnter deposit amount for account1: "; 
int depositAmount;
cin >> depositAmount; 
cout << "adding " << depositAmount << " to accountl balance";
account1.deposit(depositAmount); 

cout << "\n\nEnter withdraw amount for account1: "; 
int withdrawAmount;
cin >> withdrawAmount; 
if (withdrawAmount <= account1.getBalance()){
    cout << "withdrawing " << withdrawAmount << " to accountl balance";
    account1.withdraw(withdrawAmount); 
    }
else {
    cout << "withdrawal amount exceeded account balance";
}

cout << "\n\naccountl: " << account1.getName() << " balance is S"
<< account1.getBalance();
cout << "\naccount2:" << account2.getName () << " balance is S"
<< account2. getBalance();

cout << "\n\nEnter deposit amount for account2: "; 
cin >> depositAmount; 
cout << "adding " << depositAmount << "to account2 balance";
account2.deposit(depositAmount); // add to account balance

cout << "\n\naccountl: "<< account1.getName() << " balance is S"
<< account1. getBalance();
cout << "\naccount2: " << account2.getName() << " balance is S"
<< account2.getBalance() << endl;
}