/*C++ functions

Syntax to declare a function is:
returnType functionName (parameter1, parameter2,...) {
    // function body
}
*/
// #include <iostream>

#include <iostream>


void greet() {
    std::cout << "Hello World!";
}

void printNum(int num) {
    std::cout << num;
}

int main() {
    // calling a function
    greet();
    
    int num1 = 4;
    printNum(num1);

    return 0;


}