#include <iostream>
using namespace std;
class Complex {
private:
 double real;
 double imaginary;
 
public:
 // Constructor with default values
 Complex(double real = 0, double imaginary = 0) : real(real), imaginary(imaginary) {}
 // Overloaded operator+ to add two complex numbers
 Complex operator+(const Complex& other) const {
 return Complex(real + other.real, imaginary + other.imaginary);
 }
 // Overloaded operator* to multiply two complex numbers
 Complex operator*(const Complex& other) const {
 return Complex((real * other.real) - (imaginary * other.imaginary), (real * other.imaginary) + 
(imaginary * other.real));
 }
 // Overloaded operator<< to print complex numbers
 friend ostream& operator<<(ostream& os, const Complex& complex) {
 os << complex.real;
 if (complex.imaginary >= 0) {
 os << " + " << complex.imaginary << "i";
 } else {
 os << " - " << -complex.imaginary << "i";
 }
 return os;
 }
 // Overloaded operator>> to read complex numbers
 friend istream& operator>>(istream& is, Complex& complex) {
 cout << "\nEnter real part: ";
 is >> complex.real;
 cout << "Enter imaginary part: ";
 is >> complex.imaginary;
 return is;
 }
};
int main() {
 Complex a, b, result;
 
 cout << "Enter the first complex number:" << endl;
 cin >> a;
 cout << "Enter the second complex number:" << endl;
 cin >> b;
 result = a + b;
 cout << "Sum: " << result << endl;
 result = a * b;
 cout << "Product: " << result << endl;
 return 0;
}
