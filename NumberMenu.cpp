// Integer/Doubles Menu
// Author: Nicole Watson
// Date: 07/19/2018
/*READ ME:
    This menu is an exercise created to practice loops including the for loop, do while loop,
    nested loops, etc. The menu has different functions. */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("clear");
    
    char selection{};
    vector<double> list_of_ints{};
    double user_int{}, average{}, sum{};
    
    do {
        cout << "HOME MENU:" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of numbers" << endl;
        cout << "S - Display smallest number" << endl;
        cout << "L - Display largest number" << endl;
        cout << "C - Clear out list" << endl;
        cout << "Q - Quit" << endl << endl;
        cout << "Enter your choice: ";
        cin >> selection;
        
        if (selection == 'P' || selection == 'p') { // PRINT NUMBERS
            if (list_of_ints.size() != 0) {
                cout << "[ ";
                for (auto ints: list_of_ints) {
                    cout << ints << " ";
                }
                cout << "]" << endl << endl; 
            }
            else 
                cout << "[] - the list is empty!" << endl << endl;
        }
        else if (selection == 'A' || selection == 'a') { // ADD A NUMBER
            cout << "Add an integer: ";
            cin >> user_int;
            list_of_ints.push_back(user_int);
            cout << user_int << " has been added." << endl;
            cout << endl;
        }
        else if (selection == 'M' || selection == 'm') { // MEAN OF NUMBERS
            if (list_of_ints.size() != 0) {
                for (auto ints: list_of_ints)
                    sum += ints;
                    average = (sum / list_of_ints.size());
                    cout << "The mean of the numbers entered is: " << average << endl << endl;
            }
            else 
                cout << "Unable to calculate mean - no data!" << endl << endl;
        }
        else if (selection == 'S' || selection == 's') { // SMALLEST NUMBER
            if (list_of_ints.size() != 0) {
                double min_int = list_of_ints.at(0);
                for (double ints: list_of_ints) {
                    if (min_int > ints)
                        min_int = ints;
                }
                cout << "The smallest number is " << min_int << endl << endl;
            }
            else
                cout << "Unable to determine the smallest number - list is empty." << endl << endl;
        }
        else if (selection == 'L' || selection == 'l') { // LARGEST NUMBER
        
            if (list_of_ints.size() != 0) {
                double max_int = list_of_ints.at(0);
                for (double ints: list_of_ints) {
                    if (max_int < ints)
                        max_int = ints;
                }
                cout << "The largest number is " << max_int << endl << endl;
            }
            else
                cout << "Unable to determine the largest number - list is empty." << endl << endl;
        }
        else if (selection == 'C' || selection == 'c') { // CLEAR OUT LIST
            char user_answer{};
            if (list_of_ints.size() != 0) {
                cout << "Are you sure you want to clear out the list? (Y/N) ";
                cin >> user_answer;
                if (user_answer == 'Y' || user_answer == 'y') {
                    list_of_ints.clear();
                    cout << "The list has been cleared out." << endl << endl;                
                }
                else if (user_answer == 'N' || user_answer == 'n')
                    cout << "The list will not be cleared out." << endl << endl;
                else
                    cout << "Invalid choice. The list will not be cleared out." << endl << endl;
            }
            else if (list_of_ints.size() == 0) 
                cout << "The list is already empty!" << endl << endl;    
        }
        else if ( selection != 'Q' && selection != 'q') // UNKNOWN SELECTION
            cout << "Unknown selection, please try again." << endl << endl;
    } 
    while ( selection != 'Q' && selection != 'q'); 
    
    if (selection == 'Q' || selection == 'q') { // QUIT
        cout << "Thank you, goodbye!" << endl;
        cout << endl;
    }
    return 0;
}