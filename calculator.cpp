#include <bits/stdc++.h>
using namespace std;

int main() {
    char op;
    double a, b, result;

    // Read the operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Read the two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Define all four operations in the corresponding
    // switch-case
    switch (op) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        cout << "Error! Operator is not correct";
        result = -DBL_MAX;
    }
    
      // Printing the result
    if (result != -DBL_MAX)
        cout << "Result: " << result;
    return 0;

}