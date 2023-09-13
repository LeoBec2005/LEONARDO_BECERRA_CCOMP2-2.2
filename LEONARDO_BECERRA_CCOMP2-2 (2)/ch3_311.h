#include <iostream>
#include <string>

class MotorVehicle {
public:
    // Constructor to initialize data members
    MotorVehicle(const std::string& make, const std::string& fuelType, int yearOfManufacture, const std::string& color, int engineCapacity)
        : make_(make), fuelType_(fuelType), yearOfManufacture_(yearOfManufacture), color_(color), engineCapacity_(engineCapacity) {
    }

    // Getter and setter functions for data members
    std::string getMake() const {
        return make_;
    }

    void setMake(const std::string& make) {
        make_ = make;
    }

    std::string getFuelType() const {
        return fuelType_;
    }

    void setFuelType(const std::string& fuelType) {
        fuelType_ = fuelType;
    }

    int getYearOfManufacture() const {
        return yearOfManufacture_;
    }

    void setYearOfManufacture(int yearOfManufacture) {
        yearOfManufacture_ = yearOfManufacture;
    }

    std::string getColor() const {
        return color_;
    }

    void setColor(const std::string& color) {
        color_ = color;
    }

    int getEngineCapacity() const {
        return engineCapacity_;
    }

    void setEngineCapacity(int engineCapacity) {
        engineCapacity_ = engineCapacity;
    }

    // Member function to display car details
    void displayCarDetails() const {
        std::cout << "Make: " << make_ << std::endl;
        std::cout << "Fuel Type: " << fuelType_ << std::endl;
        std::cout << "Year of Manufacture: " << yearOfManufacture_ << std::endl;
        std::cout << "Color: " << color_ << std::endl;
        std::cout << "Engine Capacity: " << engineCapacity_ << " cc" << std::endl;
    }

private:
    std::string make_;
    std::string fuelType_;
    int yearOfManufacture_;
    std::string color_;
    int engineCapacity_;
};


