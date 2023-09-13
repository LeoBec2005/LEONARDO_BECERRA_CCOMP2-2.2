#include <iostream>
#include "ch3_311.h"
int main() {

    MotorVehicle car("Toyota", "Petrol", 2022, "Blue", 2000);


    std::cout << "Car Details:" << std::endl;
    car.displayCarDetails();


    car.setYearOfManufacture(2023);
    car.setColor("Red");
    std::cout << "\nUpdated Car Details:" << std::endl;
    std::cout << "Make: " << car.getMake() << std::endl;
    std::cout << "Fuel Type: " << car.getFuelType() << std::endl;
    std::cout << "Year of Manufacture: " << car.getYearOfManufacture() << std::endl;
    std::cout << "Color: " << car.getColor() << std::endl;
    std::cout << "Engine Capacity: " << car.getEngineCapacity() << " cc" << std::endl;

    return 0;
}