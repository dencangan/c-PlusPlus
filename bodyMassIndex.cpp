// Script to calculate Body Mass Index (BMI)
#include <iostream>

// C++ math module
#include <cmath>
using namespace std;

string selectMetric(bool isWeight) {
    
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
            return selectMetric(true);
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
            return selectMetric(false);

        }
    }
}

float bmiCalculator(float weight, float height) {

    string weightMetric = selectMetric(true);
    string heightMetric = selectMetric(false);
    float weightConverted = weight;
    float heightConverted = height;

    if (weightMetric == "lbs") {
        weightConverted = weight / 2.20462;
    };

    if (heightMetric == "inch") {
        heightConverted = height * 2.54;
        cout << endl << heightConverted;
    };

    float bmiResult = weightConverted / pow((heightConverted / 100), 2);
    cout << endl << "Your BMI is: " << bmiResult;

    return bmiResult; 


};


int main() {

    float bmi = bmiCalculator(154.324, 69.685);

    // cout << "This is a Body Mass Index (BMI) calculator" << endl;
    // cout << "Enter your weight (kg):";
    // cin >> weightInput;
    // cout << "Enter your height (cm):";
    // cin >> heightInput;

    // float bmi = bmiCalculator(weightInput, heightInput);
    // cout << "Your BMI is: " << bmi;

};