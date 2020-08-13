                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              /* C++ Basics

cout - print stuff
cin - inputs
data types - int, double, char, float

*/

// Must include iostream to use cout
#include <iostream>
// If not, use namespace std
using namespace std;

/* FUNCTIONS */
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


// Every C++ program must have a main function, this is the function that the program will execute
int main() {

    std::cout << "Hello World! This is a quick tutorial on C++.";
    cout << endl << "Hellow world, we are printing this statement using namespace std! We also use 'endl' as linespace!";
    int num1 = 70;
    double num2 = 256.783;
    char ch = 'D';
    // endl manipulator is used to insert a new line
    cout << endl << num1 << endl;
    cout << num2 << endl;
    cout << "character: " << ch << endl;

    // cin takes an input
    int num;
    // Note the arrows are pointing right now
    cout << "Please specify an integer!";
    cin >> num;
    cout << "The number is: " << num << "." << endl;

    char a;
    cout << "Now, specify an integer and a character!" << endl;
    cin >> num >> a;
    cout << "Integer: " << num << endl;
    cout << "Character: " << a; 
    
    // Data conversion
    int num_int = 9;
    double num_double;

    // Implicit conversion - assigning int value to a double variable
    num_double = num_int;
    cout << "num_int = " << num_int << endl;
    cout << "num_double = " << num_double << endl;

    // Explicit converison 
    // cast notation - C-type type casting
    int num_int_one = 1;
    num_double = (double)num_int_one;
    // or
    num_double = double(num_int_one);

    // Operators
    // ++ increment and -- decrement operators, increase and decrease by 1
    // && AND, || OR and ! NOT
    
    // Variables
    // Data type then name of variable, always end with semicolon
    int age = 24;

    // Constant variables cannot be changed
    const int LIGHT_SPEED = 299792458;

    // Fundamental Data Types
    int salary = 90000;

    // float is 4 bytes and double is 8 bytes. double has two times the precision of float
    float area = 64.74;
    double volume = 134.64534;
    double distance = 45E12;

    // char is used for characters, enclosed in single quotes
    char test = 'h';

    // normal boolean
    bool cond = false;

    // Modifiers
    long b = 4523232;
    long int c = 2345342;
    long double d = 233434.56343;

    // CALLING FUNCTIONS
    greet();
    int num_one = 4;
    printNum(num1);

    cout << "absolute function with float" << absolute(-5) << endl;
    cout << "absolute function with int" << absolute(5.5f) << endl;

    display(5, 5.5);
    
    // FLOW CONTROL in C++
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
    float num_1, num_2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num_1 >> num2;

    switch (oper) {
        case '+':
            cout << num_1 << " + " << num_2 << " = " << num_1 + num_2;
            break;
        case '-':
            cout << num_1 << " - " << num_2 << " = " << num_1 - num_2;
            break;
        case '*':
            cout << num_1 << " * " << num_2 << " = " << num_1 * num_2;
            break;
        case '/':
            cout << num_1 << " / " << num_2 << " = " << num_1 / num_2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }
    
    /*
    Structure in C++

    When a structure is created, no memory is allocated.
    */
    struct Person {
        char name[50];
        int age;
        float salary;
    };

    // Assigning structure to variable
    Person john;
    return 0;

}
