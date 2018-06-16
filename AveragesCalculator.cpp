#include <iostream>

using namespace std;

int main() {
    system("clear");
    
    cout <<"Let's learn about averages. Type in a number: ";
    
    double num_1 {0};
    cin >> num_1;
    cout <<"Good! Now type in three more numbers. Press enter after each number typed. " << endl;
    
    double num_2 {0};
    double num_3 {0};
    double num_4 {0};
    cin >> num_2;
    cin >> num_3;
    cin >> num_4;
    cout << "Perfect! I've added these numbers up for you. The sum is " << num_1 + num_2 + num_3 + num_4 <<"." << endl;
    cout << "Now I'll divide the four numbers for you. The quotient will be the average among the four numbers you've chosen." << endl;
    cout << "But while I'll calculate the average, would you mind giving me your full name? " << endl;
    
    string f_name;
    string l_name;
    cin >> f_name >> l_name;
    
    double average_of_four {4};
    cout << "Thanks " << f_name << " " << l_name << "! And I have the average. It's " << (num_1 + num_2 + num_3 + num_4) / average_of_four << "." << endl;
    cout << "Thanks for playing " << f_name << "! ";
    
    return 0;
}