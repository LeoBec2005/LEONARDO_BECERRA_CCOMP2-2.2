#include <iostream>
#include "ch3_314.h"
using namespace std;
int main() {
    Account myAccount{12345, "John", "Doe", 1000.0};

    std::cout << "Account Number: " << myAccount.getAccountNumber() << std::endl;
    std::cout << "First Name: " << myAccount.getFirstName() << std::endl;
    std::cout << "Last Name: " << myAccount.getLastName() << std::endl;
    std::cout << "Balance: $" << myAccount.getBalance() << std::endl;

    return 0;
}