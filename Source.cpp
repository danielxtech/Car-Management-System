#include <iostream>
#include <string>
using namespace std;

// Class definition for Car
class Car {
private:
    string make;
    string model;
    int year;
    double mileage;

public:
    // Constructor to initialize the car's details
    Car(string mke, string mdl, int yr, double mil) {
        make = mke;
        model = mdl;
        year = yr;
        mileage = mil;
        cout << "Constructor called for Car: " << make << " " << model << endl;
    }

    // Destructor
    ~Car() {
        cout << "Destructor called for Car: " << make << " " << model << endl;
    }

    // Setter for make
    void setMake(string mke) {
        make = mke;
    }

    // Getter for make
    string getMake() {
        return make;
    }

    // Setter for model
    void setModel(string mdl) {
        model = mdl;
    }

    // Getter for model
    string getModel() {
        return model;
    }

    // Setter for year
    void setYear(int yr) {
        year = yr;
    }

    // Getter for year
    int getYear() {
        return year;
    }

    // Setter for mileage
    void setMileage(double mil) {
        mileage = mil;
    }

    // Getter for mileage
    double getMileage() {
        return mileage;
    }

    // Function to display car details
    void displayDetails() {
        cout << "Car Details:" << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }
};

int main() {
    // Creating a Car object using the constructor
    Car car1("Toyota", "Camry", 2020, 15000.0);

    // Display initial car details
    car1.displayDetails();
    cout << endl;

    // Modifying car details using setters
    car1.setMake("Honda");
    car1.setModel("Civic");
    car1.setYear(2021);
    car1.setMileage(10000.0);

    // Display updated car details
    cout << "Updated Car Details:" << endl;
    car1.displayDetails();

    // Destructor will be called automatically when the program ends
    return 0;
}
