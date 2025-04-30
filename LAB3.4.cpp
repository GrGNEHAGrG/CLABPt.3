#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string brand; 
    int year;

public:
    Vehicle(const std::string& b = "Generic", int y = 2015) : brand(b), year(y) {
    }
    virtual void showInfo() {
    std::cout << "Brand:" << brand << std::endl;
     std::cout << "Year:" << year << std::endl;
    }
    
    virtual void startEngine() {
        std::cout << "Starting engine of Vehicle" << std::endl;
    }
    
    virtual ~Vehicle() {} 
};

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(const std::string& b = "Generic", int y = 2015, int doors = 4) 
        : Vehicle(b, y), numDoors(doors) {}
    
    void showInfo() override { 
        Vehicle::showInfo();
        std::cout << "Number of doors: " << numDoors << std::endl;
    }
    
    void startEngine() override {
        std::cout << "Car engine is starting!" << std::endl;
    }
    virtual ~Car() {}
    // Destructor
};

// Electriccar class inheriting from Car
class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    // Default constructor
    ElectricCar() : Car(), batteryCapacity(0) {
        // Default constructor
    }
    
    // Parameterized constructor
    ElectricCar(const std::string& b, int y, int doors, int battery) 
        : Car(b, y, doors), batteryCapacity(battery) {
            // :/ Nothing to do here
        }
    
    void showInfo() override {
        Car::showInfo();
        std::cout << "Battery Capacity: " << batteryCapacity << " kWh" << std::endl;
    }
    
    void startEngine() override {
        std::cout << "Electric engine is starting.. Silent but powerful!" << std::endl;
    }
    
    ~ElectricCar() {}
};

int main() {
    Vehicle* v = new Vehicle("Generic", 2015);
    v->showInfo();
    v->startEngine();
    std::cout << std::endl;
    
    Car* c = new Car("Toyota", 2021, 4);
    c->showInfo();
    c->startEngine();
    std::cout << std::endl;
    
    ElectricCar* ec1 = new ElectricCar("Tesla", 2023, 4, 75);
    ec1->showInfo();
    ec1->startEngine();
    std::cout << std::endl;
    
    ElectricCar* ec2 = new ElectricCar("Nissan", 2022, 4, 40);
    ec2->showInfo();
    ec2->startEngine();
    std::cout << std::endl;
    
    //Clean up the memory
    delete v;
    delete c;
    delete ec1;
    delete ec2;
    
    return 0;
}