#include <iostream>
#include <string>

class Account {
public:
    Account(unsigned int accNum, const std::string& first, const std::string& last, double bal)
        : accountNumber(accNum), firstName(first), lastName(last), balance(bal) {
    }

    // Getter functions to access account details
    unsigned int getAccountNumber() const {
        return accountNumber;
    }

    const std::string& getFirstName() const {
        return firstName;
    }

    const std::string& getLastName() const {
        return lastName;
    }

    double getBalance() const {
        return balance;
    }

private:
    unsigned int accountNumber;
    std::string firstName;
    std::string lastName;
    double balance;
};