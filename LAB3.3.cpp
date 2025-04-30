#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    // Constructor
    Car(string b, int y) {
        brand = b;
        year = y;
        cout << "Car " << brand << " from " << year << " created." << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car " << brand << " destroyed." << endl;
    }

    // showInfo method
    void showInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // create Car object on heap
    Car* myCar = new Car("Tesla", 2020);

    // call showInfo method
    myCar->showInfo();

    // destroy object
    delete myCar;

    return 0;
}
