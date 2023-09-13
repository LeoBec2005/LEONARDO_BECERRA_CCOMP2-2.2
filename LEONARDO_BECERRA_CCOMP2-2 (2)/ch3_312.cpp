#include <iostream>
#include "ch3_312.h"
int main() {
    Date today(9, 10, 2023); 
    std::cout << "Today's Date: ";
    today.displayDate();

    today.setMonth(12); 
    today.setDay(25);   
    today.setYear(2024); 

    std::cout << "Updated Date: ";
    std::cout << today.getDay() << "/" << today.getMonth() << "/" << today.getYear() << std::endl;

    return 0;
}