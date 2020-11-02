#include <iostream>
using namespace std;

namespace C
{
    class Person {

        // Access specifier
        public:

        // Data members
        bool isMale;
        int age;
        float height;
        float weight;
        string name, gender;

        void printSummary() {
            if (isMale == true) {
                gender = "Male";
            }
            else {
                gender = "Female";
            }
            cout << "Gender: " << gender  << ", Age: " << age  << ", Height: " << height << ", Weight: " << weight;
        }
    };
};
