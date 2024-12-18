#include <iostream>
using namespace std;

class convert {
protected:
    double val1; // Initial value
    double val2; // Converted value

public:
    // Constructor
    convert(double i) : val1(i) {}

    double getconv() {
        return val2;
    }

    double getinit() {
        return val1;
    }

    // Pure virtual function
    virtual void compute() = 0;
};

class LToG : public convert { // Liters to Gallons
public:
    // Constructor
    LToG(double i) : convert(i) {}

    void compute() {
        val2 = val1 * 0.264172; // Conversion formula
    }
};

class FToC : public convert { // Fahrenheit to Celsius
public:
    // Constructor
    FToC(double i) : convert(i) {}

    void compute() {
        val2 = (val1 - 32) * 5.0 / 9.0; // Conversion formula
    }
};

int main() {
    convert* p; // Pointer to base class
    LToG lgob(4); // Create object for Liters to Gallons
    FToC fcob(70); // Create object for Fahrenheit to Celsius

    p = &lgob; // Point to Liters to Gallons object
    cout << p->getinit() << " liters is ";
    p->compute(); // Perform conversion
    cout << p->getconv() << " gallons\n";

    p = &fcob; // Point to Fahrenheit to Celsius object
    cout << p->getinit() << " Fahrenheit is ";
    p->compute(); // Perform conversion
    cout << p->getconv() << " Celsius\n";

    return 0;
}