#include <iostream>

using namespace std;

int main(){
    // create the variables to stoe the user input
    string color, pruralNoun, celebrity;

    // get the user inputs
    cout << "enter a color:";
    getline(cin, color);

    cout << "enter a prural noun:";
    getline(cin, pruralNoun);

    cout << "enter a celebrity:";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pruralNoun <<" are blue" << endl;
    cout << "I love " << celebrity << endl;

}