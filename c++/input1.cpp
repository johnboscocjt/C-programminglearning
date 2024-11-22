#include <iostream>
// math function
#include <cmath>


using namespace std;

int main(){

    // store info in the variable
    string name;

    // prompt user
    cout << "Enter your name: ";

    // get the information from the variable
    getline(cin, name);

    // print out the entered number
    cout << "You are " << name << " and welcomed!";

    return 0;
}