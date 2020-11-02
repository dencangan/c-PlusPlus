// Script to calculate Body Mass Index (BMI)
#include <iostream>

// C++ math module
#include <cmath>
using namespace std;
#include "person.h"
using namespace C;

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

bool selectGender() {
    
    string gender;
    bool isMale;
    cout << "Are you a male or a female? (m/f)" << endl;
    cin >> gender;

    if (gender == "m") {
        isMale = true;
    }
    else if (gender == "f") {
        isMale = false;
    }
    else {
        cout << "Invalid gender code entered. Please enter 'm' for male or 'f' for female. ";
        return selectGender();
    }

    return isMale;
}

float bmiCalculator(float w, float h) {

    float bmiResult = w / pow((h / 100), 2);
    cout << endl << "Your Body Mass Index (BMI) is: " << bmiResult << endl;

    if (bmiResult < 18.5) {
        cout << "You are underweight!";
        }
    else if ((bmiResult >= 18.5) && (bmiResult < 24.9)) {
        cout << "You are healthy!";
    }
    else if ((bmiResult >= 24.9) && (bmiResult < 29.9)) {
        cout << "You are slightly overweight!";
    }
    else if ((bmiResult >= 29.9) && (bmiResult < 39.9)) {
        cout << "You are overweight!";
    }
    else if (bmiResult >= 39.9) {
        cout << "You are obese!";
    }

    return bmiResult; 
};

float calculateBasalMetabolicRate(bool isMale, float weight, float height, int age) {
    /*
    Basal Metabolic Rate (BMR) is the number of calories required to keep your body functioning at rest. BMR is also known as your body's metabolism.
    The value obtained from these equations is the estimated number of calories a person can consume in a day to maintain their body weight, assuming they remain at rest.

    Mifflin-St Jeor and Revised Harris-Benedict Equation
    */
    float mifflinStJeorBMR;
    float harrisBenedictBMR;

    if (isMale == true) {
        mifflinStJeorBMR = (10 * weight) + (6.25 * height) - (5 * age) + 5;
        harrisBenedictBMR = (13.397 * weight) + (4.799 * height) - (5.677 * age) + 88.362;

    }
    else {
        mifflinStJeorBMR = (10 * weight) + (6.25 * height) - (5 * age) - 161;
        harrisBenedictBMR = (9.247 * weight) + (3.098 * height) - (4.330 * age) + 447.593;

    }
    cout << endl << "Your Basal Metabolic Rate:";
    cout << endl << "Mifflin-St Jeor Equation: " << mifflinStJeorBMR << " calories." << endl;
    cout << "Revised Harris-Benedict Equation: " << harrisBenedictBMR << " calories.";

    return mifflinStJeorBMR, harrisBenedictBMR;
};


int main() {
    Person p;
    int age;
    bool isMale;

    cout << "What's your name? " << endl;
    cin >> p.name;
    cout << "How old are you? " << endl;
    cin >> p.age;

    selectGender();

    string weightMetric = selectMetric(true);
    string heightMetric = selectMetric(false);
    cout << "Please enter your weight (kg/lbs): " << endl;
    cin >> p.weight;
    cout << "Please enter your height (cm/inch): " << endl;
    cin >> p.height;

    if (weightMetric == "lbs") {
        p.weight = p.weight / 2.20462;
    };

    if (heightMetric == "inch") {
        p.height = p.height * 2.54;
    };

    float bmi = bmiCalculator(p.weight, p.height);
    calculateBasalMetabolicRate(isMale, p.weight, p.height, p.age);
};