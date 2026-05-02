#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter first number: \n";
    cin >> a;

    cout << "Enter operator (+ - * /): \n";
    cin >> op;

    cout << "Enter second number: \n";
    cin >> b;

    if (op == '+') {
        cout << "Result = " << a + b << endl;
    } 
    else if (op == '-') {
        cout << "Result = " << a - b << endl;
    } 
    else if (op == '*') {
        cout << "Result = " << a * b << endl;
    } 
    else if (op == '/') {
        if (b != 0)
            cout << "Result = " << a / b << endl;
        else
            cout << "Error: division by zero\n";
    } 
    else {
        cout << "Invalid operator\n";
    }

    return 0;
}