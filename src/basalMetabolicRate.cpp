// Script to emulate Basal Metabolic Rate
#include <iostream>
using namespace std;

#include "my_class.h"

float calculateBasalMetabolicRate(bool isMale, float weight, float height, int age) {
    /*
    Basal Metabolic Rate (BMR) is the number of calories required to keep your body functioning at rest. BMR is also known as your body's metabolism.
    The value obtained from these equations is the estimated number of calories a person can consume in a day to maintain their body weight, assuming they remain at rest.

    Mifflin-St Jeor and Revised Harris-Benedict Equation
    */
    float mifflinStJeorBMR;
    float harrisBenedictBMR;

    if (isMale == true) {
        cout << "Male" << endl;
        mifflinStJeorBMR = (10 * weight) + (6.25 * height) - (5 * age) + 5;
        harrisBenedictBMR = (13.397 * weight) + (4.799 * height) - (5.677 * age) + 88.362;

    }
    else {
        cout << "Female, " << "age " << age << ", " <<weight << "kg, " << height << "cm, ";
        mifflinStJeorBMR = (10 * weight) + (6.25 * height) - (5 * age) - 161;
        harrisBenedictBMR = (9.247 * weight) + (3.098 * height) - (4.330 * age) + 447.593;

    }
    cout << endl << "Mifflin-St Jeor Equation: " << mifflinStJeorBMR << " calories." << endl;
    cout << "Revised Harris-Benedict Equation: " << harrisBenedictBMR << " calories.";

    return mifflinStJeorBMR, harrisBenedictBMR;
};


int main() {
    calculateBasalMetabolicRate(false, 70.5, 177, 25);
}
