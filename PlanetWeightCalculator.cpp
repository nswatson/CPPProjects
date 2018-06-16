/* Nicole's Planet Weight Calculator!
    Author: Nicole Watson
    Date: June 16, 2018 */
    
#include <iostream>

using namespace std;

int main() {
    system ("clear");
    
    const double Mercury_grav_force {0.38};
    const double Venus_grav_force {0.91};
    const double Earth_grav_force {1.00};
    const double Mars_grav_force {0.38};
    const double Jupiter_grav_force {2.34};
    const double Saturn_grav_force {1.06};
    const double Uranus_grav_force {0.92};
    const double Neptune_grav_force {1.19};
    const double Pluto_grav_force {0.06};
    
    cout << "Nicole's Planet Weight Calculator!" << endl;
    cout << endl;
    cout << "Let's see how much you'd weigh on all the other planets in our Solar System (and Pluto)!" << endl;
    cout << "Enter your weight in pounds: ";
    double weight (0.0);
    double Mercury_weight (0.0);
    double Venus_weight (0.0);
    double Earth_weight (0.0);
    double Mars_weight (0.0);
    double Jupiter_weight (0.0);
    double Saturn_weight (0.0);
    double Uranus_weight (0.0);
    double Neptune_weight (0.0);
    double Pluto_weight (0.0);
    
    cin >> weight;
    
    Mercury_weight = weight * Mercury_grav_force;
    Venus_weight = weight * Venus_grav_force;
    Earth_weight = weight * Earth_grav_force;
    Mars_weight = weight * Mars_grav_force;
    Jupiter_weight = weight * Jupiter_grav_force;
    Saturn_weight = weight * Saturn_grav_force;
    Uranus_weight = weight * Uranus_grav_force;
    Neptune_weight = weight * Neptune_grav_force;
    Pluto_weight = weight * Pluto_grav_force;
    
    cout << "=====================================================" << endl;
    
    cout << "Your weight on the following planets are: " << endl;
    cout << "Mercury: " << Mercury_weight << " lbs." << endl;
    cout << "Venus: " << Venus_weight << " lbs." << endl;
    cout << "Earth: " << Earth_weight << " lbs." << endl;
    cout << "Mars: " << Mars_weight << " lbs." << endl;
    cout << "Jupiter: " << Jupiter_weight << " lbs." << endl;
    cout << "Saturn: " << Saturn_weight << " lbs." << endl;
    cout << "Uranus: " << Uranus_weight << " lbs." << endl;
    cout << "Neptune: " << Neptune_weight << " lbs." << endl;
    cout << "Pluto: " << Pluto_weight << " lbs." << endl;
    cout << endl;
    cout << "Hope you enjoyed my calculator! :)" << endl;
    cout << endl;

    return 0;
}
    

    
//    READ ME: In order to calculate the user's weight on different planets, I needed to 
//    calculate the ratio between Earth's surface gravity with other planets (including Pluto). Then
//    I needed to compute them separately using the formula F = G((Mm)/r2) to get the gravitational force of each planet. 
//    The results are as follows:
//    Mercury: 0.38
//    Venus: 0.91
//    Earth: 1.00
//    Mars: 0.38
//    Jupiter: 2.34
//    Saturn: 1.06
//    Uranus: 0.92
//    Neptune: 1.19
//    Pluto: 0.06
//    These calculations are from https: www.livescience.com/33356-weight-on-planets-mars-moon.html
//    Then I multiplied the user's entered weight with these numbers to get the weight calculations of each planet.