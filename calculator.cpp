#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Cannot divide by zero." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double a, b;
    char operation;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> b;

    double result;

    if (operation == '+')
        result = add(a, b);
    else if (operation == '-')
        result = subtract(a, b);
    else if (operation == '*')
        result = multiply(a, b);
    else if (operation == '/')
        result = divide(a, b);
    else {
        cout << "Invalid operation." << endl;
        return 0;
    }

    cout << "Result = " << result << endl;

    return 0;
}