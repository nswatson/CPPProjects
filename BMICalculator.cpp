// Nicole's BMI Calculator
// Author: Nicole Watson
// Date: 06/28/18

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    system ("clear");
    cout << fixed << setprecision(2);
    
    double user_weight {}, user_feet {}, user_inches {};
    
    cout << "NICOLE'S BMI CALCULATOR" << endl << endl;
    
    cout << "Please enter your weight in pounds: ";
    cin >> user_weight;
    
    if (user_weight <= 0) {
        cout << "Please enter a valid weight amount.";
    }
    else if (user_weight > 0) {
        cout << "Please enter your height in feet and inches, separated with a space: ";
        cin >> user_feet >> user_inches; 
        if (user_feet <= 0 )
            cout << "Please enter a valid height measurement in feet.";
        else if (user_feet > 0) {
            cout << "==========================================" << endl;
    
            const double feet_to_inches {12};
            double height_to_calculate {};
            height_to_calculate = ((user_feet * feet_to_inches) + user_inches); // Used to convert feet to inches
    
            const int conversion_factor {703};
            double bmi;
            bmi = (user_weight / (height_to_calculate * height_to_calculate) * conversion_factor); // BMI formula
    
            cout << "Your BMI is: " << bmi << endl;
    
            if (bmi < 16.00) {
                cout << "\nYou're in the severely underweight range.";
            } else if (16.00 <= bmi && bmi <= 16.99) {
                cout << "\nYou're in the moderately underweight range.";
            } else if (17.00 <= bmi && bmi <= 18.49) {
                cout << "\nYou're in the mildly underweight range.";
            } else if (18.50 <= bmi && bmi <= 24.99) {
                cout << "\nYou're in the normal/healthy weight range.";
            } else if (25.00 <= bmi && bmi <= 29.99) {
                cout << "\nYou're in the overweight range.";
            } else if (30.00 <= bmi && bmi <= 34.99) {
                cout << "\nYou're in the mildly obese (Obese Class I) range.";
            } else if (35.00 <= bmi && bmi <= 39.99) {
                cout << "\nYou're in the moderately obese (Obese Class II) range.";
            } else if (bmi >= 40.00) {
                cout << "\nYou're in the severely obese (Obese Class III) range.";  
            }
        }
    }
    cout << endl;
    return 0;
}

/* The BMI classifications used in this program are from the World Health Organization's website. 
 * You can learn more about their BMI classifications here:
 http://apps.who.int/bmi/index.jsp?introPage=intro_3.html */