#include <iostream>

class Date {
public:
    // Constructor to initialize the date
    Date(int month, int day, int year)
        : month_(month), day_(day), year_(year) {
        // Validate and adjust the month if necessary
        if (month_ < 1 || month_ > 12) {
            month_ = 1;
        }
    }

    // Getter and setter functions for data members
    int getMonth() const {
        return month_;
    }

    void setMonth(int month) {
        if (month >= 1 && month <= 12) {
            month_ = month;
        }
    }

    int getDay() const {
        return day_;
    }

    void setDay(int day) {
        day_ = day;
    }

    int getYear() const {
        return year_;
    }

    void setYear(int year) {
        year_ = year;
    }

    // Member function to display the date
    void displayDate() const {
        std::cout << month_ << "/" << day_ << "/" << year_ << std::endl;
    }

private:
    int month_;
    int day_;
    int year_;
};


