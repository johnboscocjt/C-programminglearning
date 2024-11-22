#include <iostream>

using namespace std;

// function declaration, function's signature
void sayHi1(string name);



int main(){
    sayHi1("Jb");

    return 0;
}

//function
void sayHi1(string name){
    cout << "Hello " << name;
}