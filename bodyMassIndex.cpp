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
            cout << "cm selected. " << endl;
            return metric;
        }
        else if (metric == "inch")
        {
            cout << "inch selected. " << endl;
            return metric;
        }
        else {
            cout << "Invalid height metric defined. Please enter 'cm' or 'inch'. ";
            return selectMetric(false);

        }
    }
}

float bmiCalculator() {

    string weightMetric = selectMetric(true);
    string heightMetric = selectMetric(false);
    float weight, height;

    cout << "Please enter your weight: " << endl;
    cin >> weight;
    cout << "Please enter your height: " << endl;
    cin >> height;

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
    cout << endl << "Your BMI is: " << bmiResult << endl;

    if (bmiResult < 18.5) {
        cout << "You are underweight.";
        }
    else if ((bmiResult > 18.5) && (bmiResult < 24.9)) {
        cout << "You are healthy.";
    }
    else if ((bmiResult > 25) && (bmiResult < 29.9)) {
        cout << "You are overweight.";
    }
    else if ((bmiResult > 30) && (bmiResult < 39.9)) {
        cout << "You are obese.";
    }
    else if (bmiResult > 40) {
        cout << "You are severely obese.";
    }

    return bmiResult; 
};


int main() {
    float bmi = bmiCalculator();
};