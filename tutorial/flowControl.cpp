/* Flow Control in C++ 
If, Else
*/

#include <iostream>
using namespace std;

int main() {
    // Example if else in C++
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number > 0) {
        cout << "You entered a positive integer: " << number << endl;
    }
    else {
        cout << "You entered a negative integer: " << number << endl;
    }
    cout << "This statement is always executed.";

    // syntax for writing a loop
    /* for (initialization; condition; update) {
        // body of loop
    }

    initialization - initialises variables, executed only once
    condition - condition of loop
    update - updates the value of initialised variables and checks the condition

    // range based loops
    for (variable : collection)
    */

    for (int i = 1; i <=5; ++i) {
        cout << i << " ";
    }

    // switch...case in C++
    /*
    switch (expression) {
        case constant1:
        // code executed if expression is equal to constant1;
        break;
        case constant2:
        // code to be executed if expression is equal to constant2;
        break;
        default:
        // code to be executed if expression doesnt match any constant

    }
    */

    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }
    


    return 0;

}

