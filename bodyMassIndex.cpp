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

string inputChoices(bool isWeight) {
    
    string metric;

    if (isWeight) {
        cout << "Please choose weight metric, enter 'kg' or 'lbs': ";
        cin >> metric;
        if (metric == "kg") {
            cout << "kg selected." << endl;
            return metric;
        }
        else if (metric == "lbs")
        {
            cout << "lbs selected." << endl;
            return metric;
        }
        else {
            cout << "Invalid weight metric defined. ";
            return inputChoices(true);
        }
    }

    else {
        cout << "Please choose height metric, enter 'cm' or 'inch': ";
        cin >> metric;
        if (metric == "cm") {
            cout << "cm selected. ";
            return metric;
        }
        else if (metric == "inch")
        {
            cout << "inch selected. ";
            return metric;
        }
        else {
            cout << "Invalid height metric defined. Please enter 'cm' or 'inch'. ";
            return inputChoices(false);

        }
    }
}

int main() {

    string weight = inputChoices(true);
    string height = inputChoices(false);
    cout << endl << weight << endl << height;

    // cout << "This is a Body Mass Index (BMI) calculator" << endl;
    // cout << "Enter your weight (kg):";
    // cin >> weightInput;
    // cout << "Enter your height (cm):";
    // cin >> heightInput;

    // float bmi = bmiCalculator(weightInput, heightInput);
    // cout << "Your BMI is: " << bmi;

}