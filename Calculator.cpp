#include <iostream>

using namespace std;

int main() {
    char operation;
    float num1, num2;

    cout << "Welcome to Calculator" << endl;
    cout << "---------------------" << endl;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Select an operation:" << endl;
    cout << "+ - Add" << endl;
    cout << "- - Subtract" << endl;
    cout << "* - Multiply" << endl;
    cout << "/ - Divide" << endl;
    cout << "Your choice: ";
    cin >> operation;

    switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 == 0) {
                cout << "Cannot divide by zero." << endl;
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Invalid operation selected." << endl;
    }

    return 0;
}
