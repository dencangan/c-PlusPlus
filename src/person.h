#include <iostream>
using namespace std;

class Person {

    // Access specifier
    public:

    // Data members
    bool isMale;
    int age;
    float height;
    float weight;
    string gender;

    void printSummary() {
        if (isMale == true) {
            gender = "Male";
        }
        else {
            gender = "Female";
        }
        cout << "Gender: " << gender  << "Age: " << age << " years old. " << "Height: " << height << "Weight: " << weight;
    }
};