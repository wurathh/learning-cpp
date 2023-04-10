#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    // ask the user for the operator they want to use
    cout << "Enter the operator (+, -, *, /, %, ^): ";
    cin >> op;

    // ask the user for the two numbers to operate on
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // perform the operation based on the operator the user chose
    switch (op) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << ".";
            break;

        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << ".";
            break;

        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << ".";
            break;

        case '/':
            if (num2 == 0) {
                cout << "Error! Cannot divide by zero.";
            } else {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << ".";
            }
            break;

        case '%':
            if (num2 == 0) {
                cout << "Error! Cannot divide by zero.";
            } else {
                result = fmod(num1, num2);
                cout << num1 << " % " << num2 << " = " << result << ".";
            }
            break;

        case '^':
            result = pow(num1, num2);
            cout << num1 << " ^ " << num2 << " = " << result << ".";
            break;

        default:
            cout << "Error! Invalid operator.";
            break;
    }

    // capitalize the first letter of the sentence
    char firstLetter = cin.get();
    firstLetter = toupper(firstLetter);
    cout << firstLetter;

    // add a period at the end of the sentence
    cout << endl;

    return 0;
}
