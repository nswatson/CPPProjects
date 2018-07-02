// Grade Average Calculator
// Author: Nicole Watson
// Date: July 1, 2018

/*  READ ME: This calculator calculates a user's grade average and letter score.
    The user is prompted to enter five test scores.
    Then the calculator calculates the average of the test scores
    and gives the user a letter grade based on the five test scores. 
    Letter grades are as follows:
    A+  = 97 to 100
    A   = 94 to 96
    A-  = 90 to 93
    B+  = 87 to 89
    B   = 84 to 86
    B-  = 80 to 83
    C+  = 77 to 79
    C   = 74 to 76
    C-  = 70 to 73
    D+  = 67 to 69
    D   = 64 to 66
    D-  = 60 to 63
    F   = 59 and below */
    
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    system("clear");
    
    vector<double> user_test_scores {};
    double entered_test_score {}, test_score_total {}, test_score_average {};
    
    cout << "NICOLE'S GRADE AVERAGE CALCULATOR" << endl << endl;
    
    cout << "Please type in five test scores. Hit 'enter' after typing in each test score." << endl;
    
    cout << "Test score #1: ";
    cin >> entered_test_score;
        if (entered_test_score < 0 || entered_test_score >= 106) {
            cout << "Please refresh the program and enter a valid test score." << endl; //This prompts the user to put in a score between 0 and 105.
        }
        else if (entered_test_score >= 0 && entered_test_score <= 105) {
            user_test_scores.push_back(entered_test_score);
            cout << "Test score #2: ";
            cin >> entered_test_score;
                if (entered_test_score < 0 || entered_test_score >= 106) {
                    cout << "Please refresh the program and enter a valid test score." << endl;
                }
                else if (entered_test_score >= 0 && entered_test_score <= 105) {
                    user_test_scores.push_back(entered_test_score);
                    cout << "Test score #3: ";
                    cin >> entered_test_score;
                        if (entered_test_score < 0 || entered_test_score >= 106) {
                            cout << "Please refresh the program and enter a valid test score." << endl;
                        }
                        else if (entered_test_score >= 0 && entered_test_score <= 105) {
                            user_test_scores.push_back(entered_test_score);
                            cout << "Test score #4: ";
                            cin >> entered_test_score;
                                if (entered_test_score < 0 || entered_test_score >= 106) {
                                    cout << "Please refresh the program and enter a valid test score." << endl;
                                }
                                else if (entered_test_score >= 0 && entered_test_score <= 105) {
                                    user_test_scores.push_back(entered_test_score);
                                    cout << "Test score #5: ";
                                    cin >> entered_test_score;
                                        if (entered_test_score < 0 || entered_test_score >= 106) {
                                            cout << "Please refresh the program and enter a valid test score." << endl;
                                        }
                                        else if (entered_test_score >= 0 && entered_test_score <= 105) {
                                            user_test_scores.push_back(entered_test_score);
                                            
                                            for (auto scores : user_test_scores)
                                                test_score_total += scores; //Adds the total amount of scores the user puts in.
                                            
                                            if (user_test_scores.size() != 0)
                                                test_score_average = test_score_total / user_test_scores.size(); // Calculates the average of the user's scores.
                                            
                                            cout << fixed << setprecision(1);
                                            
                                                if (test_score_average >= 97 && test_score_average <= 105.99)
                                                    cout << "Your test score average is " << test_score_average << ".\nThis means you will get an A+ in the course." << endl;
                                                else if (test_score_average >= 94 && test_score_average <= 96.99)
                                                    cout << "Your test score average is " << test_score_average << ".\nThis means you will get an A in the course." << endl;
                                                else if (test_score_average >= 90 && test_score_average <= 93.99)
                                                    cout << "Your test score average is " << test_score_average << ".\nThis means you will get an A- in the course." << endl;
                                                else if (test_score_average >= 87 && test_score_average <= 89.99)
                                                    cout << "Your test score average is " << test_score_average << ".\nThis means you will get a B+ in the course." << endl;
                                                else if (test_score_average >= 84 && test_score_average <= 86.99)
                                                    cout << "Your test score average is " << test_score_average << ".\nThis means you will get a B in the course." << endl;
                                                else if (test_score_average >= 80 && test_score_average <= 83.99)
                                                    cout << "Your test score average is " << test_score_average << ".\nThis means you will get a B- in the course." << endl;
                                                else if (test_score_average >= 77 && test_score_average <= 79.99)
                                                    cout << "Your test score average is " << test_score_average << ".\nThis means you will get a C+ in the course." << endl;
                                                else if (test_score_average >= 74 && test_score_average <= 76.99)
                                                    cout << "Your test score average is " << test_score_average << ".\nThis means you will get a C in the course." << endl;
                                                else if (test_score_average >= 70 && test_score_average <= 73.99)
                                                    cout << "Your test score average is " << test_score_average << ".\nThis means you will get a C- in the course." << endl;
                                                else if (test_score_average >= 67 && test_score_average <= 69.99)
                                                    cout << "Your test score average is " << test_score_average << ".\nThis means you will get a D+ in the course." << endl;
                                                else if (test_score_average >= 64 && test_score_average <= 66.99)
                                                    cout << "Your test score average is " << test_score_average << ".\nThis means you will get a D in the course." << endl;
                                                else if (test_score_average >= 60 && test_score_average <= 63.99)
                                                    cout << "Your test score average is " << test_score_average << ".\nThis means you will get a D- in the course." << endl;
                                                else if (test_score_average <= 59.99)
                                                    cout << "Your test score average is " << test_score_average << ".\nThis means you will get an F and will consequently fail the course." << endl;
                                        }
                                        
                                }
                    }
                }
        }

    cout << endl;
    
    return 0;
}