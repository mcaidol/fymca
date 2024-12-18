#include <iostream>
using namespace std;

class Rational {
private:
    int numerator, denominator;
public:
    Rational() : numerator(0), denominator(1) {}

    Rational(int num, int den) : numerator(num), denominator(den) {}

    void setRational(int num, int den) {
        numerator = num;
        denominator = den;
    }

    void print() {
        cout << numerator << "/" << denominator << endl;
    }

    Rational operator + (const Rational &r) {
        int num = numerator * r.denominator + r.numerator * denominator;
        int den = denominator * r.denominator;
        return Rational(num, den);
    }

    Rational operator - (const Rational &r) {
        int num = numerator * r.denominator - r.numerator * denominator;
        int den = denominator * r.denominator;
        return Rational(num, den);
    }

    Rational operator * (const Rational &r) {
        int num = numerator * r.numerator;
        int den = denominator * r.denominator;
        return Rational(num, den);
    }

    Rational operator / (const Rational &r) {
        int num = numerator * r.denominator;
        int den = denominator * r.numerator;
        return Rational(num, den);
    }

    bool operator > (const Rational &r) {
        return numerator * r.denominator > r.numerator * denominator;
    }

    bool operator < (const Rational &r) {
        return numerator * r.denominator < r.numerator * denominator;
    }

    bool operator >= (const Rational &r) {
        return numerator * r.denominator >= r.numerator * denominator;
    }

    bool operator <= (const Rational &r) {
        return numerator * r.denominator <= r.numerator * denominator;
    }

    bool operator == (const Rational &r) {
        return numerator * r.denominator == r.numerator * denominator;
    }

    bool operator != (const Rational &r) {
        return numerator * r.denominator != r.numerator * denominator;
    }
};

int main() {
    Rational r1, r2, result;
    int num, den, choice;
    char continueFlag;

    do {
        cout << "Enter first Rational number numerator and denominator: ";
        cin >> num >> den;
        r1.setRational(num, den);

        cout << "Enter second Rational number numerator and denominator: ";
        cin >> num >> den;
        r2.setRational(num, den);

        do {
            cout << "\n***MENU***: \n1. +  2. -  3. *  4. /  5. >  6. <  7. >=  8. <=  9. ==  10. !=  11. Print  12. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch(choice) {
                case 1:
                    result = r1 + r2;
                    cout << "The addition is: ";
                    result.print();
                    break;
                case 2:
                    result = r1 - r2;
                    cout << "The subtraction is: ";
                    result.print();
                    break;
                case 3:
                    result = r1 * r2;
                    cout << "The multiplication is: ";
                    result.print();
                    break;
                case 4:
                    result = r1 / r2;
                    cout << "The division is: ";
                    result.print();
                    break;
                case 5:
                    if (r1 > r2) {
                        cout << "First rational number is greater than the second.\n";
                    } else {
                        cout << "First rational number is not greater than the second.\n";
                    }
                    break;
                case 6:
                    if (r1 < r2) {
                        cout << "First rational number is less than the second.\n";
                    } else {
                        cout << "First rational number is not less than the second.\n";
                    }
                    break;
                case 7:
                    if (r1 >= r2) {
                        cout << "First rational number is greater than or equal to the second.\n";
                    } else {
                        cout << "First rational number is not greater than or equal to the second.\n";
                    }
                    break;
                case 8:
                    if (r1 <= r2) {
                        cout << "First rational number is less than or equal to the second.\n";
                    } else {
                        cout << "First rational number is not less than or equal to the second.\n";
                    }
                    break;
                case 9:
                    if (r1 == r2) {
                        cout << "Both rational numbers are equal.\n";
                    } else {
                        cout << "Both rational numbers are not equal.\n";
                    }
                    break;
                case 10:
                    if (r1 != r2) {
                        cout << "Both rational numbers are not equal.\n";
                    } else {
                        cout << "Both rational numbers are equal.\n";
                    }
                    break;
                case 11:
                    cout << "First Rational Number: ";
                    r1.print();
                    cout << "Second Rational Number: ";
                    r2.print();
                    break;
                case 12:
                    cout << "Exiting program...\n";
                    break;
                default:
                    cout << "Invalid choice! Please try again.\n";
            }

            if (choice != 12) {
                cout << "Do you want to continue (y / n)? ";
                cin >> continueFlag;
            }

        } while (continueFlag == 'y' || continueFlag == 'Y');
        
    } while (continueFlag == 'y' || continueFlag == 'Y');
    
    return 0;
}