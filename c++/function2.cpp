#include <iostream>

using namespace std;

// function to cube a number in cpp
double cube(double num ){
    double result = num * num * num;
    //  or alternatively u can return ,.... return num*num*num;
    return result;
}

int main(){

    double answer = cube(5.0);
    cout << answer;
    cout << cube(5.0);

    return 0;
}