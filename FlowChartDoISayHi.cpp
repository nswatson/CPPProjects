// Flow Chart #2: Do I say hi?
// Author: Nicole Watson
// Date: June 23, 2018

#include <iostream>

using namespace std;

int main() {
    system ("clear");
    
    string user_answer;
    bool remember_name {false};
    cout << "Should you say hi? Type in yes or no for each answer." << endl;
    cout << "\nDo you remember the person's name? ";
    cin >> user_answer;
    
    remember_name = (user_answer == "yes" || user_answer == "Yes" || user_answer == "YES" || user_answer == "y" || user_answer == "Y");
    
    if (remember_name == true) {
        cout << "\nIs it an ex? ";
        cin >> user_answer;
        
        bool its_an_ex {false};
        its_an_ex = (user_answer == "yes" || user_answer == "Yes" || user_answer == "YES" || user_answer == "y" || user_answer == "Y");
        
        if (its_an_ex == true ) {
            cout << "\nAre you drunk? ";
            cin >> user_answer;
            
            bool im_drunk {false};
            im_drunk = (user_answer == "yes" || user_answer == "Yes" || user_answer == "YES" || user_answer == "y" || user_answer == "Y");
            
            if (im_drunk == true) {
                cout << "\nDo you want to rekindle and/or give 'em what for? ";
                cin >> user_answer;
                
                bool rekindle {false};
                rekindle = (user_answer == "yes" || user_answer == "Yes" || user_answer == "YES" || user_answer == "y" || user_answer == "Y");
                
                if (rekindle == true) {
                    cout << "\nSay hi!";
                    cout << endl;
                }
                else if (rekindle == false) {
                    cout << "\nDon't say hi.";
                    cout << endl;
                }
            }
            else if (im_drunk == false) {
                cout << "\nAre you in a convertable with Brad Pitt and/or Rihanna? ";
                cin >> user_answer;
                
                bool cool_convertable {false};
                cool_convertable = (user_answer == "yes" || user_answer == "Yes" || user_answer == "YES" || user_answer == "y" || user_answer == "Y");
                
                if (cool_convertable == true) {
                    cout << "\nSay hi!";
                    cout << endl;
                }
                else if (cool_convertable == false) {
                    cout << "\nDon't say hi.";
                    cout << endl;
                }
            }
        }
        else if (its_an_ex == false ) {
            cout << "\nA friend's ex? ";
            cin >> user_answer;
            
            bool friends_ex {false};
            friends_ex = (user_answer == "yes" || user_answer == "Yes" || user_answer == "YES" || user_answer == "y" || user_answer == "Y");
            
            if (friends_ex == true) {
                cout << "\nDon't say hi.";
                cout << endl;
            }
            else if (friends_ex == false) {
                cout << "\nAn enemy or frenemy? ";
                cin >> user_answer;
                
                bool enemy {false};
                enemy = (user_answer == "yes" || user_answer == "Yes" || user_answer == "YES" || user_answer == "y" || user_answer == "Y");
                
                if (enemy == true) {
                    cout << "\nAre you in a convertable with Brad Pitt and/or Rihanna? ";
                    cin >> user_answer;
                    
                    bool cool_convertable_two {false};
                    cool_convertable_two = (user_answer == "yes" || user_answer == "Yes" || user_answer == "YES" || user_answer == "y" || user_answer == "Y");
                    
                    if (cool_convertable_two == true) {
                    cout << "/nSay hi!";
                    cout << endl;
                    }
                    else if (cool_convertable_two == false) {
                    cout << "\nDon't say hi.";
                    cout << endl;
                    }
                }
                else if (enemy == false) {
                    cout << "\nAre you robbing a bank? ";
                    cin >> user_answer;
                    
                    bool robbing_a_bank {false};
                    robbing_a_bank = (user_answer == "yes" || user_answer == "Yes" || user_answer == "YES" || user_answer == "y" || user_answer == "Y");
                    
                    if (robbing_a_bank == true) {
                        cout << "\nDon't say hi.";
                        cout << endl;
                    }
                    else if (robbing_a_bank == false) {
                        cout << "\nAre you in a bathrobe? ";
                        cin >> user_answer;
                        
                        bool bathrobe {false};
                        bathrobe = (user_answer == "yes" || user_answer == "Yes" || user_answer == "YES" || user_answer == "y" || user_answer == "Y");
                        
                        if (bathrobe == true) {
                            cout << "\nDon't say hi.";
                            cout << endl;
                        }
                        else if (bathrobe == false) {
                            cout << "\nSay hi!";
                            cout << endl;
                        }
                    }
                }
            }
        }
    }
    else if (remember_name == false) {
        cout << "\nIs there time to flee? ";
        cin >> user_answer;
        
        bool time_to_flee {false};
        time_to_flee = (user_answer == "yes" || user_answer == "Yes" || user_answer == "YES" || user_answer == "y" || user_answer == "Y");
        
        if (time_to_flee == true) {
            cout << "\nRun for it!";
            cout << endl;
        }
        else if (time_to_flee == false) {
            cout << "\nCould you pretend to get a call on your cell? ";
            cin >> user_answer;
            
            bool call_on_cell {false};
            call_on_cell = (user_answer == "yes" || user_answer == "Yes" || user_answer == "YES" || user_answer == "y" || user_answer == "Y");
            
            if (call_on_cell == true) {
                cout << "\nSay 'hello, doctor. What are my test results?'";
                cout << endl;
            }
            else if (call_on_cell == false) {
                cout << "\nAre you wearing sunglasses? ";
                cin >> user_answer;
                
                bool sunglasses {false};
                sunglasses = (user_answer == "yes" || user_answer == "Yes" || user_answer == "YES" || user_answer == "y" || user_answer == "Y");
                
                if (sunglasses == true) {
                    cout << "\nKeep walking.";
                    cout << endl;
                }
                else if (sunglasses == false) {
                    cout << "\nAddress the person using an amusing nickname such as 'Sarge,' 'Slugger,' or 'Master Blaster.'";
                    cout << endl;
                }
            }
            
        }
    }
    
    return 0;
}

// NOTE: Flow chart idea and answers were from https://knockknockstuff.com/wp-content/uploads/2013/07/Dilemmas_Social_SAYHI_vert1.jpg