#include <iostream>
#include <string>
using namespace std;
class Account {
public:
    Account(std::string accountName, int initialBalance)
        : name{accountName} { 
        if (initialBalance > 0) { 
            balance = initialBalance; 
        }
    }
    void deposit(int depositAmount){
        if (depositAmount > 0) { 
            balance = balance + depositAmount; 
        }
    }
    void withdraw(int withdrawAmount){
        if (withdrawAmount > 0) { 
            balance = balance - withdrawAmount; 
        }
    }
    int getBalance() const {
        return balance;
    }
    void setName (std::string accountName) {
        name = accountName;
    }
    void print(){
    cout << "accountl:"<< getName () << "balance is S"
    << getBalance();
    cout << "\naccount2: " << getName () << " balance is S"
    << getBalance();

    cout << "\n\nEnter deposit amount for account1: "; 
    int depositAmount;
    cin >> depositAmount; 
    cout << "adding " << depositAmount << " to accountl balance";
    deposit(depositAmount); 

    cout << "\n\nEnter withdraw amount for account1: "; 
    int withdrawAmount;
    cin >> withdrawAmount; 
    if (withdrawAmount <= getBalance()){
        cout << "withdrawing " << withdrawAmount << " to accountl balance";
        withdraw(withdrawAmount); 
        }
    else {
        cout << "withdrawal amount exceeded account balance";
    }

    cout << "\n\naccountl: " << getName() << " balance is S"
    << getBalance();
    cout << "\naccount2:" << getName () << " balance is S"
    << getBalance();

    cout << "\n\nEnter deposit amount for account2: "; 
    cin >> depositAmount; 
    cout << "adding " << depositAmount << "to account2 balance";
    deposit(depositAmount); // add to account balance

    cout << "\n\naccountl: "<< getName() << " balance is S"
    << getBalance();
    cout << "\naccount2: " << getName() << " balance is S"
    << getBalance() << endl;
    }
    std::string getName() const {
        return name;
    }
    private:
        std::string name; 
        int balance {0}; 
};