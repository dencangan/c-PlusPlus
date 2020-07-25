/*C++ functions

Syntax to declare a function is:
returnType functionName (parameter1, parameter2,...) {
    // function body
}
*/

#include <iostream>
using namespace std;

void greet() {
    cout << "Hello World!";
}

void printNum(int num) {
    cout << num;
}


// Function Overloading
// Duplicate function names, accepting different data types
float absolute(float var) {
    if (var < 0.0)
    var = -var;
    return var;
}

int absolute(int var) {
    if (var < 0)
    var = -var;
    return var;
}

void display(int var1, double var2) {
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << endl;
}

int main() {
    // calling a function
    greet();
    int num1 = 4;
    printNum(num1);

    cout << "absolute function with float" << absolute(-5) << endl;
    cout << "absolute function with int" << absolute(5.5f) << endl;

    display(5, 5.5);
    return 0;
}
