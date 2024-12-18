#include <iostream>
#include <cstring>
using namespace std;
class Student {
private:
 char* name;
 int rollNumber;
 char* className;
 char division;
 char* dob;
 char* bloodGroup;
 char* contactAddress;
 long long phoneNumber;
 char* licenseNumber;
public:
 // Constructor to initialize the student object
 Student(const char* n, int roll, const char* cls, char div, const char* birth,
 const char* blood, const char* address, long long phone, const char* license) {
 name = new char[strlen(n) + 1];
 strcpy(name, n);
 rollNumber = roll;
 className = new char[strlen(cls) + 1];
 strcpy(className, cls);
 division = div;
 dob = new char[strlen(birth) + 1];
 strcpy(dob, birth);
 bloodGroup = new char[strlen(blood) + 1];
 strcpy(bloodGroup, blood);
 contactAddress = new char[strlen(address) + 1];
 strcpy(contactAddress, address);
 phoneNumber = phone;
 licenseNumber = new char[strlen(license) + 1];
 strcpy(licenseNumber, license);
 }
 // Destructor to free memory when the object is destroyed
 ~Student() {
 delete[] name;
 delete[] className;
 delete[] dob;
 delete[] bloodGroup;
 delete[] contactAddress;
 delete[] licenseNumber;
 }
 // Display student information
 void display() {
 cout << "Name: " << name << std::endl;
 cout << "Roll Number: " << rollNumber << std::endl;
 cout << "Class: " << className << std::endl;
 cout << "Division: " << division << std::endl;
 cout << "Date of Birth: " << dob << std::endl;
 cout << "Blood Group: " << bloodGroup << std::endl;
 cout << "Contact Address: " << contactAddress << std::endl;
 cout << "Phone Number: " << phoneNumber << std::endl;
 cout << "Driving License No.: " << licenseNumber << std::endl;
 }
};
int main() {
 // Create a student object using the constructor
 Student student("John Doe", 101, "Class 10", 'A', "2000-01-01", "A+", "123 Main St", 1234567890, 
"DL123456");
 // Display student information
 student.display();
 return 0;
}