// Script to calculate Body Mass Index (BMI)
#include <iostream>

// C++ math module
#include <cmath>
using namespace std;

float weightConverter(int weight, bool isKg) {
    float kgToPound = 2.20462;
    if (isKg) {
        return weight;
    }
    else {
         return weight * kgToPound; 
    }
};

float heightConverter(int height, bool isCm) {
    float inchToCm = 2.20462;
    if (isCm) {
        return height;
    }
    else {
         return height * inchToCm; 
    }
}

float bmiCalculator(float weight, float height) {
    return weight / pow((height / 100), 2);
};

int main() {
    float bmi = bmiCalculator(80, 180);
    cout << bmi;
}