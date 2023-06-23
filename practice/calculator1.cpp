
#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (operation == '+') {
        result = num1 + num2;
        cout << "Result: " << result << endl;
    }
    else if (operation == '-') {
        result = num1 - num2;
        cout << "Result: " << result << endl;
    }
    else if (operation == '*') {
        result = num1 * num2;
        cout << "Result: " << result << endl;
    }
    else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
        else {
            cout << "Error: Division by zero" << endl;
        }
    }
    else {
        cout << "Invalid operator" << endl;
    }

    return 0;
}
